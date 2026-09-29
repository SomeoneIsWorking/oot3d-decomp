// OoT3D decomp @ 002f0444  name=FUN_002f0444  size=412

void FUN_002f0444(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  undefined4 local_34;
  undefined4 local_30;

  iVar1 = DAT_002f05e0;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_002f05e0 + 0x18) = 1;
    FUN_00343270(*(undefined4 *)(iVar1 + 0xc));
    FUN_002fcc88(DAT_002f0614,DAT_002f0610,*(undefined4 *)(iVar1 + 8));
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  else if (param_1 == 1) {
    *(undefined4 *)(DAT_002f05e0 + 0x18) = 9;
    *(undefined4 *)(iVar1 + 0x1c) = 5;
    FUN_002f88e0();
    FUN_002f9a1c(*(undefined4 *)(iVar1 + 0xc));
  }
  FUN_002f74a4(1);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  FUN_002e9a00();
  FUN_002f7b44();
  FUN_002f7af4(*(undefined4 *)(DAT_002f05e8 + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(DAT_002f05e4 + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(iVar1 + 0x14));
  FUN_002f79b4(*(undefined4 *)(DAT_002f05f0 + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(DAT_002f05ec + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(iVar1 + 0x14));
  puVar8 = DAT_002f060c;
  uVar7 = DAT_002f0608;
  uVar6 = DAT_002f0604;
  iVar5 = DAT_002f0600;
  iVar4 = DAT_002f05fc;
  iVar3 = DAT_002f05f8;
  iVar2 = DAT_002f05f4;
  if (*(int *)(iVar1 + 0x18) != 3) {
    iVar10 = 0;
    do {
      iVar9 = (ushort)((*(ushort *)(iVar2 + 0x8a) & *(ushort *)(iVar3 + iVar10 * 2)) >>
                      *(sbyte *)(iVar4 + iVar10)) - 1;
      *(int *)(iVar5 + iVar10 * 4) = iVar9;
      if (iVar9 < 0) {
        local_34 = uVar7;
      }
      else {
        local_34 = VectorSignedToFloat(iVar9 * 0x32,(byte)(in_fpscr >> 0x15) & 3);
        local_30 = uVar6;
      }
      FUN_002f9430(*puVar8,&local_34,1,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
  }
  FUN_002fcb04(*(undefined4 *)(iVar1 + 8),(int)*(short *)(iVar2 + 0xe8),0);
  FUN_002f78c0();
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  return;
}
