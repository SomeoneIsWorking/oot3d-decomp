// OoT3D decomp @ 002b6b18  name=FUN_002b6b18  size=132

undefined4 FUN_002b6b18(int param_1,uint param_2)

{
  uint uVar1;

  if ((int)(*(int *)(param_1 + 0x1c) -
           (*(int *)(param_1 + 0x24) + (uint)(*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x20))
           )) < (int)(uint)(*(uint *)(param_1 + 0x18) - *(uint *)(param_1 + 0x20) < param_2)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = param_2 + uVar1;
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)CARRY4(param_2,uVar1);
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar1 + param_2;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar1,param_2);
  software_interrupt(0x18);
  uVar1 = *(uint *)(param_1 + 0x54) >> 0x1b;
  if ((*(uint *)(param_1 + 0x54) & 0x80000000) != 0) {
    uVar1 = uVar1 - 0x20;
  }
  if ((uVar1 != 0xfffffff9 && uVar1 != 0) && uVar1 != 1) {
    FUN_003351b4();
  }
  return 1;
}
