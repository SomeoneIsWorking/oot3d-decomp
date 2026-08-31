// OoT3D decomp @ 004c6364  name=FUN_004c6364  size=224

void FUN_004c6364(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;

  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(bool *)((int)param_1 + 0x199) = *(char *)(param_2 + 0x24) != '\0';
  uVar1 = func_0x004c7ce8(*(undefined2 *)(param_2 + 0x26));
  *(undefined1 *)(param_1 + 0x66) = uVar1;
  uVar1 = func_0x004c7d60(*(undefined4 *)(*param_1 + 0x28));
  *(undefined1 *)((int)param_1 + 0x19a) = uVar1;
  uVar1 = func_0x004c7eb8(*(undefined2 *)(*param_1 + 0x10));
  *(undefined1 *)(param_1 + 99) = uVar1;
  uVar1 = func_0x004c7ddc(*(undefined2 *)(*param_1 + 0x12));
  *(undefined1 *)((int)param_1 + 0x18b) = uVar1;
  *(bool *)((int)param_1 + 0x191) = *(char *)(*param_1 + 0x14) != '\0';
  uVar1 = func_0x004c7e18(*(undefined2 *)(*param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x62) = uVar1;
  uVar1 = func_0x004c7f08(*(undefined2 *)(*param_1 + 0x1c));
  *(undefined1 *)((int)param_1 + 0x189) = uVar1;
  iVar2 = *param_1;
  *(bool *)((int)param_1 + 0x192) = *(char *)(iVar2 + 0x1e) != '\0';
  *(bool *)((int)param_1 + 0x193) = *(char *)(iVar2 + 0x1f) != '\0';
  *(bool *)(param_1 + 0x65) = *(char *)(iVar2 + 0x20) != '\0';
  *(bool *)((int)param_1 + 0x195) = *(char *)(iVar2 + 0x23) != '\0';
  return;
}
