// OoT3D decomp @ 0030eea8  name=FUN_0030eea8  size=256

void FUN_0030eea8(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;

  bVar1 = *(byte *)(param_1 + 0x8b);
  if (param_2 == 0) {
    if ((bVar1 != 0) && ((bVar1 == 1 || bVar1 == 2) || bVar1 == 3)) {
      fVar6 = (float)FUN_0030b44c(param_1 + 0x74);
      fVar2 = DAT_0030efac;
      fVar7 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      iVar3 = (int)((DAT_0030efac - fVar6) * fVar7);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      uVar5 = FUN_0030b44c((undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = uVar5;
      *(float *)(param_1 + 0x78) = fVar2;
      *(int *)(param_1 + 0x7c) = iVar3;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined1 *)(param_1 + 0x8b) = 3;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      return;
    }
  }
  else if ((bVar1 < 2) || ((bVar1 != 2 && (bVar1 == 3)))) {
    fVar2 = (float)FUN_0030b44c(param_1 + 0x74);
    uVar5 = DAT_0030efa8;
    fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = (int)(fVar2 * fVar6);
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    uVar4 = FUN_0030b44c((undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_1 + 0x78) = uVar5;
    *(int *)(param_1 + 0x7c) = iVar3;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x8b) = 1;
    *(undefined1 *)(param_1 + 0x8c) = 0;
  }
  return;
}
