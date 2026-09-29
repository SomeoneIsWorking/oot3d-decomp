// OoT3D decomp @ 0044b5a0  name=FUN_0044b5a0  size=284

void FUN_0044b5a0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;

  puVar1 = DAT_0044b6bc;
  if (((*DAT_0044b6bc & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0044b6bc), iVar2 != 0)) {
    FUN_0036788c(DAT_0044b6c0);
  }
  iVar2 = DAT_0044b6cc;
  iVar3 = *(int *)(DAT_0044b6d0 + 0x30);
  if (iVar3 < 3) {
    if (*(int *)(DAT_0044b6d0 + 0x40) != iVar3) {
      if (iVar3 == 0) {
        unaff_r4 = DAT_0044b6e0;
        if (*DAT_0044b6d4 != 0) {
          unaff_r4 = 0x960;
        }
      }
      else if (iVar3 == 1) {
        unaff_r4 = DAT_0044b6e4;
        if (DAT_0044b6d4[1] != 0) {
          unaff_r4 = DAT_0044b6e8;
        }
      }
      else if ((iVar3 == 2) && (unaff_r4 = DAT_0044b6d8, DAT_0044b6d4[2] != 0)) {
        unaff_r4 = DAT_0044b6dc;
      }
      *(int *)(DAT_0044b6d0 + 0x40) = iVar3;
      FUN_002e9a3c(iVar2,unaff_r4,1);
      if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0044b6bc), iVar3 != 0)) {
        FUN_0036788c(DAT_0044b6c0);
      }
      *(undefined1 *)(iVar2 + 0xd) = 1;
      return;
    }
  }
  else {
    *(int *)(DAT_0044b6d0 + 0x40) = iVar3;
  }
  return;
}
