// OoT3D decomp @ 00447150  name=FUN_00447150  size=492

void FUN_00447150(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_26c [524];
  undefined4 local_60 [9];
  int local_3c [6];

  iVar11 = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_3c[0] = *DAT_0044733c;
  *(int *)((int)local_3c + *(int *)(local_3c[0] + -0x30)) = DAT_0044733c[3];
  iVar5 = FUN_002e63c8(DAT_00447340);
  uVar2 = DAT_00447350;
  uVar8 = DAT_0044734c;
  iVar9 = DAT_00447348;
  if (iVar5 != 0) {
    iVar11 = 3;
  }
  local_60[3] = *DAT_00447344;
  local_60[4] = DAT_00447344[1];
  local_60[5] = DAT_00447344[2];
  local_60[6] = DAT_00447344[3];
  local_60[7] = DAT_00447344[4];
  local_60[8] = DAT_00447344[5];
  iVar5 = 0;
  do {
    iVar6 = (iVar5 + iVar11) * DAT_00447354;
    FUN_00324f44(auStack_26c,local_60[iVar5 + iVar11 + 3],uVar2);
    uVar7 = FUN_00324eac(auStack_26c,iVar9 + iVar6 * 4,uVar8,0,1);
    local_60[iVar5] = uVar7;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  do {
    iVar9 = 0;
    while( true ) {
      software_interrupt(10);
      iVar6 = FUN_0031b9c0(local_60[iVar9],0);
      iVar5 = DAT_00447358;
      if (iVar6 == 0) break;
      iVar9 = iVar9 + 1;
      if (2 < iVar9) {
        iVar9 = 0;
        do {
          iVar10 = iVar9 + iVar11;
          *(uint *)(iVar5 + iVar10 * 4) =
               (uint)((*(uint *)local_60[iVar9] & 0x80000000) != 0x80000000);
          FUN_0031b99c();
          uVar8 = DAT_0044734c;
          iVar6 = DAT_00447348 + iVar10 * DAT_00447354 * 4;
          if (*(int *)(iVar5 + iVar10 * 4) != 0) {
            uVar1 = *(ushort *)(iVar6 + 0x14d8);
            *(undefined2 *)(iVar6 + 0x14d8) = 0;
            uVar3 = FUN_002faf90(iVar6,uVar8,0);
            *(undefined2 *)(iVar6 + 0x14d8) = uVar3;
            uVar4 = (ushort)*(byte *)(iVar6 + 0x2e);
            bVar12 = uVar4 == 2;
            if (bVar12) {
              uVar4 = *(ushort *)(iVar6 + 0x14d8);
            }
            if (!bVar12 || uVar4 != uVar1) {
              *(undefined4 *)(iVar5 + iVar10 * 4) = 0;
              FUN_00324f44(auStack_26c,local_60[iVar10 + 3],DAT_00447350);
              uVar8 = FUN_002e6344(auStack_26c,1);
              FUN_0031b9c0(uVar8,1);
              FUN_0031b99c(uVar8);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 3);
        if ((local_3c[1] & 0xfffffffeU) != 0) {
          FUN_0030d614(local_3c[1] & 0xfffffffe);
        }
        return;
      }
    }
  } while( true );
}
