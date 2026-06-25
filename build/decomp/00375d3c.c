// OoT3D decomp @ 00375d3c  name=FUN_00375d3c  size=216

void FUN_00375d3c(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  *(char *)(param_2 + 8) = *(char *)(param_2 + 8) + -1;
  iVar2 = param_2 + (uint)*(byte *)(param_3 + 2) * 8;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
  if (*(int *)(param_3 + 300) == 0) {
    *(undefined4 *)(param_2 + (uint)*(byte *)(param_3 + 2) * 8 + 0x10) =
         *(undefined4 *)(param_3 + 0x130);
  }
  else {
    *(undefined4 *)(*(int *)(param_3 + 300) + 0x130) = *(undefined4 *)(param_3 + 0x130);
  }
  if (*(int *)(param_3 + 0x130) != 0) {
    *(undefined4 *)(*(int *)(param_3 + 0x130) + 300) = *(undefined4 *)(param_3 + 300);
  }
  *(undefined4 *)(param_3 + 0x130) = 0;
  *(undefined4 *)(param_3 + 300) = 0;
  uVar1 = (uint)*(char *)(param_3 + 3);
  bVar3 = uVar1 == (int)(char)*(byte *)(DAT_00375e14 + param_1);
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_3 + 2);
  }
  bVar4 = bVar3 && uVar1 == 5;
  if (bVar3 && uVar1 == 5) {
    bVar4 = *(int *)(param_2 + 0x34) == 0;
  }
  if (bVar4) {
    *(uint *)(param_1 + 0x2240) =
         *(uint *)(param_1 + 0x2240) | 1 << (uint)*(byte *)(DAT_00375e14 + param_1);
  }
  *(char *)(param_3 + 2) = (char)param_4;
  *(char *)(param_2 + 8) = *(char *)(param_2 + 8) + '\x01';
  param_2 = param_2 + param_4 * 8;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 300) = param_3;
  }
  *(int *)(param_2 + 0x10) = param_3;
  *(int *)(param_3 + 0x130) = iVar2;
  return;
}

