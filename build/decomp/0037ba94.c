// OoT3D decomp @ 0037ba94  name=FUN_0037ba94  size=176

void FUN_0037ba94(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_14 [4];

  *(short *)(param_1 + 0x28e) = *(short *)(param_1 + 0x28e) + 1;
  (**(code **)(param_1 + 0x27c))(param_1,param_2);
  uVar1 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_14,param_1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  if (*(int *)(param_1 + 0x27c) != DAT_0037bb44) {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1bc);
    if (*(int *)(param_1 + 0x27c) != DAT_0037bb48) {
      *(byte *)(param_1 + 0x1cd) = *(byte *)(param_1 + 0x1cd) & 0xfd;
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1bc);
    }
  }
  return;
}
