// OoT3D decomp @ 00423010  name=FUN_00423010  size=140

int FUN_00423010(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_3 + param_2 & 0xfffffffc;
  uVar3 = param_2 + 3U & 0xfffffffc;
  if ((uVar3 <= uVar4) && (0x13 < uVar4 - uVar3)) {
    FUN_0043624c(param_1,DAT_0042309c,uVar3,uVar4,param_4);
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0;
    puVar2 = *(undefined2 **)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x1c);
    *puVar2 = (short)DAT_004230a0;
    puVar2[1] = 0;
    *(int *)(puVar2 + 2) = iVar1 - (int)(puVar2 + 8);
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined2 **)(param_1 + 0x24) = puVar2;
    *(undefined2 **)(param_1 + 0x28) = puVar2;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return param_1;
  }
  return 0;
}
