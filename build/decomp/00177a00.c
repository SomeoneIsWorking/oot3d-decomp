// OoT3D decomp @ 00177a00  name=FUN_00177a00  size=136

void FUN_00177a00(void)

{
  float fVar1;
  int iVar2;
  int unaff_r4;
  float fVar3;
  undefined4 unaff_s16;
  
  fVar1 = fRam00177aa0;
  iVar2 = iRam00177a98;
  fVar3 = *(float *)(unaff_r4 + 100) + fRam00177a94;
  *(float *)(unaff_r4 + 100) = fVar3;
  if (iVar2 < (int)fVar3) {
    fVar3 = fRam00177a9c;
  }
  *(float *)(unaff_r4 + 100) = fVar3;
  if (*(short *)(unaff_r4 + 0x1c2) != 0) {
    *(short *)(unaff_r4 + 0x1c2) = *(short *)(unaff_r4 + 0x1c2) + -1;
  }
  iVar2 = func_0x003705a0(*(float *)(unaff_r4 + 0xc) - fVar1,unaff_r4 + 0x2c);
  if (iVar2 == 0) {
    func_0x00373264();
  }
  if (*(short *)(unaff_r4 + 0x1c2) == 0) {
    *(undefined4 *)(unaff_r4 + 100) = unaff_s16;
    *(undefined2 *)(unaff_r4 + 0x1c2) = 0xb4;
    *(undefined4 *)(unaff_r4 + 0x1bc) = uRam00177aa8;
  }
  return;
}

