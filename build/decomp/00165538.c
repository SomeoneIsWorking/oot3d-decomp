// OoT3D decomp @ 00165538  name=FUN_00165538  size=248

void FUN_00165538(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_00372f38(param_1,param_2,0);
  uVar1 = DAT_00165634;
  *(undefined4 *)(param_1 + 0x50) = DAT_00165630;
  FUN_00372d4c(DAT_00165638,uVar1,param_1 + 0xbc,0);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1fc,0,1,param_1 + 0x280,param_1 + 0x4bc,0xb);
  FUN_00373d40(param_1 + 0x1fc,1);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0016563c);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(DAT_00165640,param_1);
  uVar1 = DAT_0016564c;
  iVar2 = DAT_00165648;
  *(undefined4 *)(param_1 + 0x70c) = DAT_00165644;
  *(undefined2 *)(iVar2 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,DAT_00165650,0,0,0,0
              );
  return;
}
