// OoT3D decomp @ 00110830  name=FUN_00110830  size=80

void FUN_00110830(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1c0));
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 0x1c2) = 0;
    uVar2 = DAT_00110880;
    if (*(short *)(param_1 + 0x1c) == 0) {
      uVar2 = DAT_00110884;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    *(undefined4 *)(param_1 + 0x140) = DAT_00110888;
  }
  return;
}
