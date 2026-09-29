// OoT3D decomp @ 00154c10  name=FUN_00154c10  size=152

void FUN_00154c10(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1a8),param_3,param_4,param_4);
  uVar1 = DAT_00154ca8;
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x140) = uVar1;
    if (*(short *)(param_1 + 0x1c) == 0) {
      FUN_00372f38(param_1,param_2,param_1 + 0x39c,0x1e,0);
    }
    else {
      FUN_00372f38(param_1,param_2,param_1 + 0x39c,4,0);
    }
    *(undefined2 *)(param_1 + 0x1aa) = 0x30;
    uVar1 = DAT_00154cac;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  }
  return;
}
