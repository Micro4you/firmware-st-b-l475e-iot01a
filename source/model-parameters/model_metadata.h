/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef _EI_CLASSIFIER_MODEL_METADATA_H_
#define _EI_CLASSIFIER_MODEL_METADATA_H_

#define EI_CLASSIFIER_UTENSOR                    1
#define EI_CLASSIFIER_TFLITE                     2

#define EI_CLASSIFIER_SENSOR_MICROPHONE          1
#define EI_CLASSIFIER_SENSOR_ACCELEROMETER       2

#define EI_CLASSIFIER_NN_INPUT_FRAME_SIZE        33
#define EI_CLASSIFIER_RAW_SAMPLE_COUNT           125
#define EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME      3
#define EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE       (EI_CLASSIFIER_RAW_SAMPLE_COUNT * EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME)
#define EI_CLASSIFIER_INTERVAL_MS                16
#define EI_CLASSIFIER_OUT_TENSOR_NAME            "y_pred/Softmax:0"
#define EI_CLASSIFIER_LABEL_COUNT                4
#define EI_CLASSIFIER_HAS_ANOMALY                1
#define EI_CLASSIFIER_FREQUENCY                  62.5
#define EI_CLASSIFIER_TFLITE_ARENA_SIZE          (16 * 1024)
#define EI_CLASSIFIER_INFERENCING_ENGINE         EI_CLASSIFIER_UTENSOR
#define EI_CLASSIFIER_SENSOR                     EI_CLASSIFIER_SENSOR_ACCELEROMETER

const char* ei_classifier_inferencing_categories[] = { "idle", "snake", "updown", "wave" };

typedef struct {
    int axes;
    float scale_axes;
    bool average;
    bool minimum;
    bool maximum;
    bool rms;
} ei_dsp_config_flatten_t;

typedef struct {
    int axes;
    int num_cepstral;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int win_size;
    int low_frequency;
    int high_frequency;
    float pre_cof;
    int pre_shift;
} ei_dsp_config_mfcc_t;

typedef struct {
    int axes;
    float scale_axes;
} ei_dsp_config_raw_t;

typedef struct {
    int axes;
    float scale_axes;
    const char * filter_type;
    float filter_cutoff;
    int filter_order;
    int fft_length;
    int spectral_peaks_count;
    float spectral_peaks_threshold;
    const char * spectral_power_edges;
} ei_dsp_config_spectral_analysis_t;

ei_dsp_config_spectral_analysis_t ei_dsp_config_20 = {
    3,
    1.00000f,
    "low",
    3.00000f,
    6,
    128,
    3,
    0.10000f,
    "0.1, 0.5, 1.0, 2.0, 5.0"
};

#endif // _EI_CLASSIFIER_MODEL_METADATA_H_
