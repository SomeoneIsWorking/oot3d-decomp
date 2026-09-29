// OoT3D decomp @ 002ea038  name=FUN_002ea038  size=64

void FUN_002ea038(undefined4 param_1)

{
  if (*DAT_002ea040 == '\0') {
    return;
  }
  *(undefined4 *)(DAT_002ea040 + 4) = param_1;
  if (*DAT_00453b3c != '\0') {
    *(undefined4 *)(DAT_00453b3c + 4) = param_1;
    FUN_002e219c(DAT_0046632c);
    return;
  }
  return;
}
