// OoT3D decomp @ 0044f288  name=FUN_0044f288  size=268

void FUN_0044f288(void)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int extraout_r3;
  int local_10 [2];

  FUN_00460858();
  pfVar1 = DAT_0044f358;
  if (DAT_0044f358[3] != 0.0) {
    fVar3 = (float)((int)DAT_0044f358[3] + -1);
    DAT_0044f358[3] = fVar3;
    if (fVar3 == 0.0) {
      fVar3 = pfVar1[1];
    }
    else {
      fVar3 = *pfVar1 + pfVar1[2];
    }
    *pfVar1 = fVar3;
  }
  pfVar1 = DAT_0044f35c;
  if (DAT_0044f35c[3] != 0.0) {
    fVar3 = (float)((int)DAT_0044f35c[3] + -1);
    DAT_0044f35c[3] = fVar3;
    if (fVar3 == 0.0) {
      fVar3 = pfVar1[1];
    }
    else {
      fVar3 = *pfVar1 + pfVar1[2];
    }
    *pfVar1 = fVar3;
  }
  FUN_0046225c();
  iVar4 = FUN_00366684(0);
  uVar2 = DAT_0044f368;
  if (iVar4 != -1) {
    uVar5 = iVar4 + DAT_0044f360;
    if (0x54 < uVar5) {
      uVar5 = 0;
    }
    if ((*(byte *)(DAT_0044f364 + uVar5) & 0x10) != 0) {
      if (*(short *)(DAT_0044f364 + -0xe0) != 0xc0) {
        local_10[0] = extraout_r3;
        FUN_0030ee14(local_10,DAT_00465510);
        if (local_10[0] != 0) {
          FUN_00481534(local_10[0],3,uVar2);
        }
        FUN_0030ede0(local_10);
        return;
      }
      *(undefined2 *)(DAT_0044f364 + -0xe0) = 0;
    }
  }
  return;
}
