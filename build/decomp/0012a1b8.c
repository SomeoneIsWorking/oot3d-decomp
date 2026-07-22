// OoT3D decomp @ 0012a1b8  name=FUN_0012a1b8  size=236

void FUN_0012a1b8(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  undefined8 unaff_d8;
  float fVar2;
  
  fVar2 = (float)((ulonglong)unaff_d8 >> 0x20);
  func_0x0036e168(unaff_r4 + 0x920);
  func_0x0036e168(unaff_r4 + 0x924);
  if (*(float *)(unaff_r5 + 0x120) != fVar2) {
    func_0x003731e0(unaff_r4 + 0x1a4);
  }
  if (*(float *)(unaff_r5 + 0x120) == fVar2) {
    uVar1 = *(uint *)(unaff_r4 + 4) | 0x20000000;
  }
  else {
    uVar1 = *(uint *)(unaff_r4 + 4) & 0xdfffffff;
  }
  *(uint *)(unaff_r4 + 4) = uVar1;
  return;
}

