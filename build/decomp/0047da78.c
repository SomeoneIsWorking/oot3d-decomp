// OoT3D decomp @ 0047da78  name=FUN_0047da78  size=152

void FUN_0047da78(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;

  iVar2 = FUN_0030e1e4();
  iVar1 = DAT_0047db10;
  *(undefined1 *)(iVar2 + 0xf) = 1;
  do {
    iVar3 = FUN_0030b304(iVar2 + 0x40);
    pcVar4 = *(code **)(iVar2 + 0x28);
    if (pcVar4 != (code *)0x0) {
      iVar3 = *(int *)(iVar2 + 0x20);
    }
    if (pcVar4 != (code *)0x0 && iVar3 != 0) {
      (*pcVar4)(*(undefined4 *)(iVar2 + 0x2c));
    }
    FUN_002ce884(DAT_0047db14,0,
                 *(undefined4 *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x131c) * 8 + 0x12f0));
    FUN_002ce884(DAT_0047db14,1,
                 *(undefined4 *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x131c) * 8 + 0x12f4));
    coproc_moveto_Data_Synchronization(0);
    FUN_00310148(iVar2 + 0x44);
  } while (*(char *)(iVar2 + 0xf) != '\0');
  return;
}
