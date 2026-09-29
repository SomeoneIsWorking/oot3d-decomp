// OoT3D decomp @ 0035c464  name=FUN_0035c464  size=156

void FUN_0035c464(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  ushort uVar4;
  bool bVar5;
  uint in_fpscr;
  undefined4 uVar6;
  float fVar7;

  uVar6 = DAT_0035c500;
  uVar4 = *(ushort *)(param_1 + 0x1c);
  bVar5 = (uVar4 & 0x1f) != 0;
  if (bVar5) {
    uVar4 = uVar4 & 0x1f;
  }
  if ((!bVar5 || uVar4 == 1) &&
     (*(undefined1 *)(param_1 + 0xc16) = 1, (*(ushort *)(DAT_0035c504 + 0x32) & 0x4000) == 0)) {
    uVar6 = DAT_0035c508;
  }
  iVar2 = DAT_0035c51c;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  uVar6 = DAT_0035c50c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  piVar1 = DAT_0035c510;
  *(undefined4 *)(param_1 + 0xc4) = uVar6;
  fVar3 = DAT_0035c520;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(iVar2 + param_1) = (short)(int)(DAT_0035c514 / fVar7 + DAT_0035c518);
  uVar6 = DAT_0035c524;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar3;
  *(undefined4 *)(param_1 + 0xbbc) = uVar6;
  return;
}
