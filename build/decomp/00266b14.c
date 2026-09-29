// OoT3D decomp @ 00266b14  name=FUN_00266b14  size=280

void FUN_00266b14(int param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;

  FUN_00375a18(param_1 + 0xc0,0,1,4000,0);
  fVar1 = DAT_00266c2c;
  FUN_0036e168(DAT_00266c38,DAT_00266c34,DAT_00266c30,DAT_00266c2c,param_1 + 0x46c);
  FUN_003731e0(param_1 + 0x1a4);
  if ((*(ushort *)(param_1 + 0x90) & 3) != 0) {
    FUN_0036f00c(DAT_00266c40,DAT_00266c3c,param_2,param_1,param_1 + 0x28,0xb,0,0,0);
    *(short *)(param_1 + 0x446) = (short)DAT_00266c44;
    *(float *)(param_1 + 0x474) = fVar1;
    FUN_00375bcc(param_1,DAT_00266c48);
    *(undefined4 *)(param_1 + 0x44c) = DAT_00266c4c;
  }
  if (*(byte *)(param_1 + 0x450) < 0xf7) {
    cVar2 = *(byte *)(param_1 + 0x450) + 8;
  }
  else {
    cVar2 = -1;
  }
  *(char *)(param_1 + 0x450) = cVar2;
  if (*(byte *)(param_1 + 0x451) < 0x20) {
    *(undefined1 *)(param_1 + 0x451) = 0;
  }
  else {
    *(byte *)(param_1 + 0x451) = *(byte *)(param_1 + 0x451) - 0x20;
  }
  if (*(byte *)(param_1 + 0x452) < 0x28) {
    *(undefined1 *)(param_1 + 0x452) = 0;
  }
  else {
    *(byte *)(param_1 + 0x452) = *(byte *)(param_1 + 0x452) - 0x28;
  }
  if (fVar1 < *(float *)(param_1 + 0xc4)) {
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - DAT_00266c50;
  }
  return;
}
