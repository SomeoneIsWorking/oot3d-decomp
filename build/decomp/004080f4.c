// OoT3D decomp @ 004080f4  name=FUN_004080f4  size=144

int FUN_004080f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00350820(param_1,DAT_00408184,0x18,4);
  uVar2 = DAT_00408188;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x80) = uVar2;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(int *)(iVar1 + 0x8c) = iVar1;
  iVar1 = FUN_00404420(iVar1 + 0x90);
  FUN_00309e78(iVar1 + 0x1c);
  uVar2 = DAT_0040818c;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  *(undefined1 *)(iVar1 + 0x35) = 0;
  *(undefined1 *)(iVar1 + 0x36) = 0;
  *(undefined1 *)(iVar1 + 0x37) = 0;
  *(undefined1 *)(iVar1 + 0x80) = 0;
  *(undefined1 *)(iVar1 + 0x81) = 0;
  *(undefined2 *)(iVar1 + 0x82) = 0;
  *(undefined2 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  uVar2 = FUN_00309b60();
  FUN_00308b70(uVar2,iVar1 + -0x10);
  return iVar1 + -0x90;
}
