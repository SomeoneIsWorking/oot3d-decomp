// OoT3D decomp @ 0038a164  name=FUN_0038a164  size=80

undefined4 FUN_0038a164(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint in_fpscr;
  float fVar2;
  
  *(undefined1 *)(iRam0038a1b4 + param_2) = *(undefined1 *)(param_3 + 4);
  uVar1 = *(undefined1 *)(param_3 + 5);
  *(undefined1 *)(param_2 + 0x31a9) = uVar1;
  *(undefined1 *)(param_2 + 0x31a8) = uVar1;
  *(undefined1 *)(param_2 + 0x31b0) = *(undefined1 *)(param_3 + 6);
  fVar2 = fRam0038a1b8;
  if (*(byte *)(param_3 + 7) != 0) {
    fVar2 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_3 + 7),(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = fVar2 * fRam0038a1bc;
  }
  *(float *)(param_2 + 0x321c) = fVar2;
  return 1;
}

