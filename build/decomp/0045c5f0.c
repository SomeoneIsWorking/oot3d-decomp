// OoT3D decomp @ 0045c5f0  name=FUN_0045c5f0  size=256

void FUN_0045c5f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;

  puVar1 = DAT_0045c6f0;
  if (((*DAT_0045c6f0 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0045c6f0), iVar2 != 0)) {
    FUN_0036788c(DAT_0045c6f4);
  }
  iVar2 = DAT_0045c700;
  FUN_002d78d0(DAT_0045c700,0xffffffff,0);
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0045c6f0), iVar3 != 0)) {
    FUN_0036788c(iVar2 + -0x32c0);
  }
  iVar3 = DAT_0045c704;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined2 *)(iVar3 + param_1) = 0;
  FUN_00340bdc(param_1,0);
  *(undefined4 *)(param_1 + 0x2a8c) = 0;
  *(undefined2 *)(param_1 + 0x2b62) = 0;
  *(undefined2 *)(param_1 + 0x2b80) = 0;
  *(undefined1 *)(param_1 + 0x2b71) = 0;
  *(undefined1 *)(param_1 + 0x2b70) = 0;
  *(undefined2 *)(param_1 + 0x2a84) = 0;
  *(undefined2 *)(param_1 + 0x2b6e) = 0xff;
  FUN_002e5a38(param_1 + 0x28a0);
  *(undefined2 *)(*DAT_0045c708 + 0x4d2) = 0;
  return;
}
