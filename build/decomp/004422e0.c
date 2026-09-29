// OoT3D decomp @ 004422e0  name=FUN_004422e0  size=396

void FUN_004422e0(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;

  puVar1 = DAT_0044246c;
  if (((*DAT_0044246c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0044246c), iVar2 != 0)) {
    FUN_0036788c(DAT_00442470);
  }
  iVar2 = DAT_0044247c;
  iVar4 = *(int *)(DAT_00442484 + 0x30);
  uVar3 = (uint)*(ushort *)(DAT_00442480 + 0x92);
  iVar6 = 0xff;
  if (iVar4 == 5) {
    if (((uint)*(byte *)(uVar3 + DAT_00442488 + 0xc0) & *DAT_0044248c) != 0) {
      iVar6 = 0x74;
    }
  }
  else if (iVar4 == 6) {
    if (((uint)*(byte *)(uVar3 + DAT_00442488 + 0xc0) & DAT_0044248c[1]) != 0) {
      iVar6 = 0x75;
    }
  }
  else if ((iVar4 == 7) && (((uint)*(byte *)(uVar3 + DAT_00442488 + 0xc0) & DAT_0044248c[2]) != 0))
  {
    iVar6 = 0x76;
  }
  if (*(int *)(DAT_00442484 + 0x34) != iVar6) {
    *(int *)(DAT_00442484 + 0x34) = iVar6;
    if (iVar6 == 0xff) {
      FUN_002e9b00(0xffffffff);
      uVar5 = extraout_r1;
      if ((*puVar1 & 1) == 0) {
        uVar7 = FUN_003679b4(DAT_0044246c);
        uVar5 = (int)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 != 0) {
          FUN_0036788c(DAT_00442470);
          uVar5 = DAT_00442478;
        }
      }
      FUN_002e9a1c(iVar2,uVar5);
      return;
    }
    FUN_002e9b00(iVar6);
    FUN_002e9a3c(iVar2,iVar6 + 0x700,1);
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0044246c), iVar4 != 0)) {
      FUN_0036788c(DAT_00442470);
    }
    *(undefined1 *)(iVar2 + 0xd) = 1;
  }
  return;
}
