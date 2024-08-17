# An extreme gradient boosting approach to elderly fall classification  

- This repository presents **Classification of fall events in elderly people** using an algorithm based on **Gradient Boosting**(XBoost).

- With this project we can better distinguish **fall event detection from common walking events in elderly patients** based on data from a Calm Stick (cStick) [1][2].

**Keywords:** Smart Healthcare; Internet of Medical things (IoMT); Fall Detection; Elderly Falls; Fall risk.
### 🔗Acknowledgement

- [Read: cStick: A Calm Stick for Fall Prediction, Detection and Control in the IoMT Framework](https://link.springer.com/chapter/10.1007/978-3-030-96466-5_9)
- [Read: Elderly Fall Prediction and Detection](https://www.kaggle.com/datasets/laavanya/elderly-fall-prediction-and-detection)

### Requirements
- Python 3.5+
- Libraries: numpy, pandas, sklearn, tensorflow, seaborn, matplotlib,xgboost.
### Dataset Description

(Preliminary) - Official results will be released soon, but here is some initial information


The original data from ElderlyFall-dataset [1] were structured to facilitate data manipulation and are available in `.csv` format and and can be seen in `cStick.csv`.

The dataset has `2,039` samples containing information about objects near the user, changes in spatial location, heart rate, saturation, blood sugar level, and pressure applied to the device by the user. The samples are distributed into three classes: normal (`n = 690`), imminent risk of falling (`n = 682`) and falling (`n = 667`).

### Classification

(Preliminary) - Official results will be released soo.
### Main results

- Best result (08/12/2024): For classification, it was possible to achieve an accuracy of **100.00%**.
### 🔗Authors & Contributing

- [@paulomonson](https://www.github.com/paulomonson) [![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/paulomonteirodecarvalhomonson?miniProfileUrn=urn%3Ali%3Afs_miniProfile%3AACoAAC3HEioBXAty7FLjtkooe_8PH7hBNM8DRNs&lipi=urn%3Ali%3Apage%3Ad_flagship3_search_srp_all%3BLRAPrbY5Ty2xgqAY1GY0Tw%3D%3D)

- [@gadavidd](https://www.github.com/gadavidd) [![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/gabriel-david-3813568a/)


### 🔗References

[1] L. Laavanya, "Elderly Fall Prediction and Detection," Kaggle, 2023. [Online]. Available: https://www.kaggle.com/datasets/laavanya/elderly-fall-prediction-and-detection. [Accessed: 12-Aug-2024].

[2] L. Rachakonda, S. P. Mohanty, and E. Kougianos, “cStick: A Calm Stick for Fall Prediction, Detection and Control in the IoMT Framework,” in Internet of Things. Technology and Applications, L. M. Camarinha-Matos, G. Heijenk, S. Katkoori, and L. Strous, Eds., Cham: Springer International Publishing, 2022, pp. 129–145.
