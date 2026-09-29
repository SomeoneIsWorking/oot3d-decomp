// OoT3D decomp @ 001b79c8  name=FUN_001b79c8  size=788

void FUN_001b79c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  short local_30 [2];
  ushort local_2c [2];
  int local_28;

  (**(code **)(param_1 + 0x840))();
  iVar4 = DAT_001b7cfc;
  iVar7 = *(int *)(param_2 + 0x20ac);
  if (*(int *)(param_1 + 0x89c) == 2) {
    FUN_0036be34(param_2,*(undefined2 *)(DAT_001b7cf8 + iVar7));
    *(undefined4 *)(param_1 + 0x89c) = 1;
  }
  else {
    local_28 = param_1 + 0x8d4;
    if (*(int *)(param_1 + 0x89c) == 1) {
      uVar8 = 1;
      uVar3 = FUN_003769d8(param_2 + 0x28a0);
      uVar2 = DAT_001b7d00;
      uVar9 = DAT_001b7d00 | 2;
      switch(uVar3) {
      case 4:
        iVar5 = FUN_00346964(param_2);
        if (iVar5 != 0) {
          iVar5 = FUN_00369f3c(param_2);
          if (iVar5 == 0) {
            *(short *)(DAT_001b7cf8 + iVar7) = (short)DAT_001b7d04;
            *(uint *)(param_1 + 0x8d0) = *(uint *)(param_1 + 0x8d0) & 0xfffffffe;
            FUN_00353aa4(param_1,6,local_28);
          }
          else {
            *(short *)(DAT_001b7cf8 + iVar7) = (short)uVar2;
            *(ushort *)(iVar4 + 0x3e) = *(ushort *)(iVar4 + 0x3e) | 0x1000;
          }
          uVar8 = 2;
        }
        break;
      case 5:
        iVar5 = FUN_00346964(param_2);
        if (iVar5 != 0) {
          FUN_00345fcc(param_2);
          FUN_00376a78(param_2,0x2c);
          *(ushort *)(iVar4 + 0xe) = *(ushort *)(iVar4 + 0xe) | 0x800;
          FUN_00376a60(500);
          uVar8 = 2;
          *(short *)(DAT_001b7cf8 + iVar7) = (short)uVar9;
        }
        break;
      case 6:
        iVar4 = FUN_00346964(param_2);
        if (iVar4 != 0) {
          if (*(ushort *)(DAT_001b7cf8 + iVar7) == uVar9 ||
              *(ushort *)(DAT_001b7cf8 + iVar7) == uVar2) {
            *(uint *)(param_1 + 0x8d0) = *(uint *)(param_1 + 0x8d0) | 1;
            FUN_00353aa4(param_1,2,local_28);
          }
          uVar8 = 0;
        }
      }
      *(undefined4 *)(param_1 + 0x89c) = uVar8;
    }
    else {
      iVar7 = FUN_0036bc98(param_1,param_2);
      uVar2 = DAT_001b7d08;
      uVar9 = DAT_001b7d08 | (int)DAT_001b7d08 >> 0xd;
      if (iVar7 == 0) {
        FUN_00363a20(param_2,param_1,local_2c,local_30);
        iVar7 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        iVar7 = VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        if ((local_2c[0] < 0x191) && (iVar5 = (int)local_30[0], -1 < iVar5)) {
          bVar11 = SBORROW4(iVar5,0xf0);
          iVar1 = iVar5 + -0xf0;
          bVar10 = iVar5 == 0xf0;
          if (iVar5 < 0xf1) {
            bVar11 = SBORROW4(iVar7,DAT_001b7d10);
            iVar1 = iVar7 - DAT_001b7d10;
            bVar10 = iVar7 == DAT_001b7d10;
          }
          if (((bVar10 || iVar1 < 0 != bVar11) && (*(int *)(param_1 + 0x89c) != 3)) &&
             (iVar7 = FUN_0036bb28(DAT_001b7d14,param_1,param_2), iVar7 != 0)) {
            iVar7 = *(int *)(param_2 + 0x20ac);
            uVar6 = FUN_0036bba8(param_2,0x1c);
            if ((*(ushort *)(iVar4 + 0xe) & 0x800) == 0) {
              if (*(char *)(iVar7 + 0x1b7) == '\x04') {
                uVar6 = uVar2;
                if ((*(ushort *)(iVar4 + 0x3e) & 0x1000) != 0) {
                  uVar6 = uVar9;
                }
              }
              else if (uVar6 == 0) {
                uVar6 = DAT_001b7d1c;
              }
            }
            else if (uVar6 == 0) {
              uVar6 = DAT_001b7d18;
            }
            *(short *)(param_1 + 0x116) = (short)uVar6;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x89c) = 1;
        if ((*(int *)(param_1 + 0x8d4) != 5) &&
           (*(ushort *)(param_1 + 0x116) == uVar2 || *(ushort *)(param_1 + 0x116) == uVar9)) {
          FUN_00353aa4(param_1,5,local_28);
          FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001b7d0c);
        }
      }
    }
  }
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x844);
  return;
}
