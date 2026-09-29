// OoT3D decomp @ 00177460  name=FUN_00177460  size=184

void FUN_00177460(int param_1)

{
  short *psVar1;
  int iVar2;

  iVar2 = FUN_003731e0(param_1 + 0x5b0);
  psVar1 = DAT_00177518;
  if (iVar2 != 0) {
    FUN_0036e734(param_1 + 0x5b0,*(undefined4 *)(DAT_00177518 + 0x10));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    FUN_00375ed8(param_1,0,0xff,0,1);
    *(undefined2 *)(param_1 + 0x11a) = 1;
    *(undefined2 *)(param_1 + 0x1a8) = 0;
    FUN_00375bcc(param_1,DAT_0017751c);
    if (*psVar1 == -3) {
      FUN_0037547c(DAT_00177528,0,4,DAT_00177524,DAT_00177524,DAT_00177520);
      *psVar1 = -4;
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0017752c;
  }
  return;
}
