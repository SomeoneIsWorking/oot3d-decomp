// OoT3D decomp @ 0028a708  name=FUN_0028a708  size=260

void FUN_0028a708(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;

  FUN_003510b0(param_1,DAT_0028a80c);
  FUN_003532e8(param_1,0);
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1cc,3,0);
  uVar2 = FUN_00372f0c(uVar2,0xf);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0x10) = 1;
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0028a810;
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  puVar1 = DAT_0028a814;
  if (*(int *)(param_1 + 0x28) == 0x452e8000) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *puVar1 = 7;
  }
  else if (*(int *)(param_1 + 0x28) == 0x453d8000) {
    *(undefined2 *)(param_1 + 0x1c) = 1;
    puVar1[1] = 0xe;
  }
  return;
}
