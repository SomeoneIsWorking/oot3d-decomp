// OoT3D decomp @ 004c6964  name=FUN_004c6964  size=164

void FUN_004c6964(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 in_stack_0000000c;

  puVar4 = (uint *)*DAT_004c6a08;
  if ((param_1 - 0x6610U < 0x20) && (param_4 != 0)) {
    iVar1 = **(int **)(*DAT_004c6a0c + param_1 * 4 + -0x19018);
    *(undefined4 *)(iVar1 + 0x81c) = 0xffffffff;
    FUN_0034338c(iVar1 + 4,in_stack_0000000c,param_4 << 2);
    puVar2 = puVar4 + 0x43;
    puVar3 = puVar4 + 100;
    iVar1 = 0x21;
    do {
      if (*puVar2 == puVar4[param_1 + -0x65f3]) {
        *puVar2 = 0;
        *puVar3 = 0;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 != 0);
    *puVar4 = *puVar4 | 0x4000;
  }
  return;
}
