// OoT3D decomp @ 002eb628  name=FUN_002eb628  size=220

void FUN_002eb628(void)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;

  iVar1 = DAT_002eb704;
  *(undefined4 *)(DAT_002eb704 + 0x34) = 0;
  if (*(int *)(iVar1 + 0xb0) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0xb0) + 0x34) = DAT_002eb708;
  }
  uVar2 = DAT_002eb70c;
  if (*(int *)(iVar1 + 0x44) != 0) {
    FUN_002f8ce0(DAT_002eb70c,*(int *)(iVar1 + 0x44),0);
  }
  if (*(int *)(iVar1 + 0x48) != 0) {
    FUN_002f8ce0(uVar2,*(int *)(iVar1 + 0x48),0);
  }
  FUN_002d2b84();
  FUN_002f74a4(6);
  uVar2 = extraout_r1;
  if (((*DAT_002eb710 & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_002eb710), uVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0))
  {
    FUN_0036788c(DAT_002eb714);
    uVar2 = DAT_002eb71c;
  }
  FUN_002e9a1c(DAT_002eb720,uVar2);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    return;
  }
  FUN_002e64bc(DAT_002eb728,DAT_002eb724);
  return;
}
