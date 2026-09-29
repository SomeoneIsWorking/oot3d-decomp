// OoT3D decomp @ 00494ce0  name=FUN_00494ce0  size=216

void FUN_00494ce0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  *(undefined1 *)(*(int *)(param_1 + 0x528) + 0x6c) = 0;
  FUN_00305224(*(undefined4 *)(param_1 + 0x920));
  FUN_002df800(*(undefined4 *)(param_1 + 0x520));
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  do {
    iVar4 = param_1 + iVar2 * 4;
    iVar2 = iVar2 + 2;
    *(undefined1 *)(*(int *)(iVar4 + 0x6b4) + 0x6c) = 0;
    *(undefined1 *)(*(int *)(iVar4 + 0x6b8) + 0x6c) = 0;
    uVar1 = DAT_00494dbc;
  } while (iVar2 < 0x10);
  iVar4 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x52c) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x530) + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x934) = 0xffffffff;
  puVar3 = (undefined4 *)(DAT_00494db8 + *(int *)(param_1 + 0x120) * 8);
  uVar6 = puVar3[1];
  iVar2 = *(int *)(param_1 + 0x920);
  *(undefined4 *)(iVar2 + 0x80) = *puVar3;
  *(undefined4 *)(iVar2 + 0x84) = uVar6;
  *(undefined4 *)(iVar2 + 0x88) = uVar1;
  do {
    iVar2 = param_1 + iVar4 * 4;
    iVar5 = *(int *)(iVar2 + 0x77c);
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 0x6c) = 0;
      FUN_003051cc(*(int *)(iVar2 + 0x77c) + 8);
    }
    iVar2 = param_1 + iVar4 * 8;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar2 + 0x954) = 0xff;
    *(undefined1 *)(iVar2 + 0x958) = 0;
  } while (iVar4 < 8);
  *(undefined1 *)(*(int *)(param_1 + 0x534) + 0x6c) = 0;
  return;
}
