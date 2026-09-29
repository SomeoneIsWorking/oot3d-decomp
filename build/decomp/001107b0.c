// OoT3D decomp @ 001107b0  name=FUN_001107b0  size=108

void FUN_001107b0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + DAT_0011081c));
  if (iVar2 != 0) {
    iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    uVar1 = DAT_00110820;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00110820;
    }
    else if (*(char *)(DAT_00110824 + param_2) == '\x02') {
      *(undefined4 *)(param_1 + 0x2c) = DAT_00110828;
      *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x140) = DAT_0011082c;
  }
  return;
}
