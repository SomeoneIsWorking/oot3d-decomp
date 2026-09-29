// OoT3D decomp @ 00374ab0  name=FUN_00374ab0  size=240

void FUN_00374ab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_00374ba0;
  *(undefined1 *)(param_2 + 0x964) = 1;
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  uVar1 = DAT_00374ba4;
  *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0xbe);
  if (*(char *)(param_2 + 0x962) == '\0') {
    if (*(char *)(param_2 + 0x965) == '\x01') {
      FUN_00375ed8(param_2,0,200,0,0x50);
    }
    else {
      FUN_00375bcc(param_2,uVar1,0,param_4,param_4);
      FUN_00375ed8(param_2,0x800000,200,0,0x50);
    }
  }
  else {
    *(undefined2 *)(DAT_00374ba8 + param_2) = 900;
    iVar2 = DAT_00374bac;
    iVar3 = *(int *)(DAT_00374bac + 0x10);
    if (*(int *)(param_1 + 0x5bf4) != iVar3) {
      *(int *)(DAT_00374bac + 0x10) = *(int *)(param_1 + 0x5bf4);
      FUN_00375bcc(param_2,uVar1,iVar2,iVar3,param_4);
    }
    FUN_00375ed8(param_2,0x800000,DAT_00374bb0,0,0xff);
  }
  *(undefined1 *)(param_2 + 0x9c8) = 0;
  *(undefined4 *)(param_2 + 0x950) = DAT_00374bb4;
  return;
}
