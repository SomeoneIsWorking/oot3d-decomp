// OoT3D decomp @ 0031d150  name=FUN_0031d150  size=184

undefined4 FUN_0031d150(float param_1,undefined4 param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;

  fVar2 = *(float *)(param_3 + 0x100);
  if (*(float *)(param_3 + 0xfc) + fVar2 <= param_4[2]) {
    *(undefined1 *)(param_3 + 0x120) = 2;
  }
  else {
    if (-fVar2 < param_4[2]) {
      fVar1 = DAT_0031d208;
      if (0x3f7fffff < (int)param_1) {
        fVar1 = DAT_0031d208 / param_1;
      }
      if ((((int)((ABS(*param_4) - fVar2) * fVar1) < 0x3f800000) &&
          ((uint)((param_4[1] + *(float *)(param_3 + 0x104)) * fVar1) < (uint)DAT_0031d20c)) &&
         ((int)((param_4[1] - fVar2) * fVar1) < 0x3f800000)) {
        *(undefined1 *)(param_3 + 0x120) = 0;
        return 1;
      }
    }
    *(undefined1 *)(param_3 + 0x120) = 1;
  }
  return 0;
}
