// OoT3D decomp @ 00111470  name=FUN_00111470  size=1984

undefined4 FUN_00111470(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;

  uVar7 = DAT_00111cac;
  uVar6 = DAT_00111ca8;
  uVar5 = DAT_00111c9c;
  uVar4 = DAT_00111c6c;
  uVar3 = DAT_00111c5c;
  uVar2 = DAT_00111c44;
  iVar10 = DAT_00111c40;
  iVar9 = DAT_00111c34;
  iVar8 = param_3 - DAT_00111c30;
  iVar11 = DAT_00111c30 + 0x23;
  if (param_3 != DAT_00111c30) {
    if (DAT_00111c30 <= param_3) {
      iVar10 = iVar8 - DAT_00111c54;
      if (iVar8 == DAT_00111c54) {
        FUN_0036be34(param_1,DAT_00111c9c);
        *(short *)(param_2 + 0x116) = (short)uVar5;
        return 0;
      }
      if (DAT_00111c54 <= iVar8) {
        if (iVar10 == 0xfee) {
          iVar9 = FUN_00369f3c(param_1);
          uVar2 = DAT_00111ca0;
          if (iVar9 == 0) {
            FUN_0036be34(param_1,DAT_00111ca0);
            *(short *)(param_2 + 0x116) = (short)uVar2;
          }
          iVar9 = FUN_00369f3c(param_1);
          uVar2 = DAT_00111ca4;
          if (iVar9 != 1) {
            return 0;
          }
          FUN_0036be34(param_1,DAT_00111ca4);
          *(short *)(param_2 + 0x116) = (short)uVar2;
          return 0;
        }
        if (iVar10 == 0x3fe9) {
          FUN_0036be34(param_1,DAT_00111ca8);
          *(short *)(param_2 + 0x116) = (short)uVar6;
          return 0;
        }
        if (iVar10 != 0x4020) {
          if (iVar10 == 0x4021) {
            FUN_0036be34(param_1,DAT_00111c6c);
            *(short *)(param_2 + 0x116) = (short)uVar4;
            return 0;
          }
          return 1;
        }
        FUN_0036be34(param_1,DAT_00111cac);
        *(short *)(param_2 + 0x116) = (short)uVar7;
        return 0;
      }
      if (iVar8 == 0x23) {
        return 1;
      }
      if (0x23 < iVar8) {
        if (iVar8 == 0xfd3) {
          iVar10 = FUN_00369f3c(param_1);
          uVar3 = DAT_00111c90;
          uVar2 = DAT_00111c8c;
          if (iVar10 == 0) {
            if ((*(ushort *)(DAT_00111c88 + iVar9) & 4) == 0) {
              FUN_0036be34(param_1,DAT_00111c90);
              *(short *)(param_2 + 0x116) = (short)uVar3;
            }
            else {
              FUN_0036be34(param_1,DAT_00111c8c);
              *(short *)(param_2 + 0x116) = (short)uVar2;
            }
          }
          iVar9 = FUN_00369f3c(param_1);
          uVar2 = DAT_00111c94;
          if (iVar9 != 1) {
            return 0;
          }
          FUN_0036be34(param_1,DAT_00111c94);
          *(short *)(param_2 + 0x116) = (short)uVar2;
          return 0;
        }
        if (iVar8 != 0xfe4) {
          return 1;
        }
        iVar9 = FUN_00369f3c(param_1);
        uVar2 = DAT_00111c60;
        if (iVar9 == 0) {
          FUN_0036be34(param_1,DAT_00111c60);
          *(short *)(param_2 + 0x116) = (short)uVar2;
        }
        iVar9 = FUN_00369f3c(param_1);
        uVar3 = DAT_00111c98;
        uVar2 = DAT_00111c68;
        if (iVar9 != 1) {
          return 0;
        }
        if ((*(ushort *)(DAT_00111c64 + 0x10) & 8) != 0) {
          FUN_0036be34(param_1,DAT_00111c68);
          *(short *)(param_2 + 0x116) = (short)uVar2;
          return 0;
        }
        FUN_0036be34(param_1,DAT_00111c98);
        *(short *)(param_2 + 0x116) = (short)uVar3;
        return 0;
      }
      if (iVar8 != 1) {
        if (iVar8 != 0xc) {
          return 1;
        }
        if ((*(ushort *)(DAT_00111c58 + 0xec) & 4) == 0) {
          FUN_0036be34(param_1,DAT_00111c5c);
          *(short *)(param_2 + 0x116) = (short)uVar3;
          return 0;
        }
        return 1;
      }
      iVar9 = FUN_00369f3c(param_1);
      if (iVar9 == 0) {
        return 1;
      }
      iVar9 = FUN_00369f3c(param_1);
      goto joined_r0x00111aac;
    }
    iVar9 = param_3 - DAT_00111c38;
    if (param_3 == DAT_00111c38) {
LAB_001119f4:
      iVar10 = FUN_00369f3c(param_1);
      iVar9 = DAT_00111c7c;
      uVar1 = (undefined2)DAT_00111c7c;
      if (iVar10 == 0) {
        if (*(short *)(DAT_00111c40 + 0x48) < 10) {
          FUN_0036be34(param_1,DAT_00111c7c);
          *(undefined2 *)(param_2 + 0x116) = uVar1;
        }
        else {
          iVar10 = DAT_00111c7c + 2;
          FUN_0036be34(param_1,iVar10);
          *(short *)(param_2 + 0x116) = (short)iVar10;
          FUN_00376a60(0xfffffff6);
        }
      }
      iVar10 = FUN_00369f3c(param_1);
      if (iVar10 == 1) {
        FUN_0036be34(param_1,iVar9);
        *(undefined2 *)(param_2 + 0x116) = uVar1;
      }
      *(ushort *)(DAT_00111c80 + 0x10) = *(ushort *)(DAT_00111c80 + 0x10) | 0x400;
      return 0;
    }
    if (param_3 < DAT_00111c38) {
      uVar12 = DAT_00111c3c - 8;
      uVar13 = uVar12 | (int)uVar12 >> 0xc;
      iVar9 = DAT_00111c3c + -5;
      if (param_3 == DAT_00111c3c) {
        iVar9 = FUN_00369f3c(param_1);
        uVar2 = DAT_00111c78;
        if (iVar9 == 0) {
          FUN_0036be34(param_1,DAT_00111c78);
          *(short *)(param_2 + 0x116) = (short)uVar2;
        }
        iVar9 = FUN_00369f3c(param_1);
        if (iVar9 != 1) {
          return 0;
        }
        FUN_0036be34(param_1,0x1040);
        *(undefined2 *)(param_2 + 0x116) = 0x1040;
        return 0;
      }
      if (param_3 < DAT_00111c3c) {
        uVar1 = (undefined2)DAT_00111c44;
        if (param_3 == 0x1035) {
          iVar9 = FUN_00369f3c(param_1);
          if (iVar9 == 0) {
            if ((*(ushort *)(iVar10 + 0xf14) & 0x400) == 0) {
              FUN_0036be34(param_1,uVar2);
              *(undefined2 *)(param_2 + 0x116) = uVar1;
            }
            else {
              FUN_0036be34(param_1,uVar12);
              *(short *)(param_2 + 0x116) = (short)uVar12;
            }
          }
          iVar9 = FUN_00369f3c(param_1);
          if (iVar9 != 1) {
            return 0;
          }
          if ((*(ushort *)(iVar10 + 0xf14) & 0x800) != 0) {
            FUN_0036be34(param_1,uVar13);
            *(short *)(param_2 + 0x116) = (short)uVar13;
            return 0;
          }
        }
        else {
          if (param_3 != 0x1038) {
            return 1;
          }
          iVar8 = FUN_00369f3c(param_1);
          if (iVar8 == 0) {
            if ((*(ushort *)(iVar10 + 0xf14) & 0x4000) == 0) {
              FUN_0036be34(param_1,uVar2);
              *(undefined2 *)(param_2 + 0x116) = uVar1;
            }
            else {
              FUN_0036be34(param_1,iVar9);
              *(short *)(param_2 + 0x116) = (short)iVar9;
            }
          }
          iVar9 = FUN_00369f3c(param_1);
          uVar3 = DAT_00111c70;
          if (iVar9 == 1) {
            if ((*(ushort *)(iVar10 + 0xf14) & 0x8000) == 0) {
              FUN_0036be34(param_1,uVar2);
              *(undefined2 *)(param_2 + 0x116) = uVar1;
            }
            else {
              FUN_0036be34(param_1,DAT_00111c70);
              *(short *)(param_2 + 0x116) = (short)uVar3;
            }
          }
          iVar9 = FUN_00369f3c(param_1);
          uVar3 = DAT_00111c74;
          if (iVar9 != 2) {
            return 0;
          }
          if ((*(ushort *)(iVar10 + 0xf16) & 1) != 0) {
            FUN_0036be34(param_1,DAT_00111c74);
            *(short *)(param_2 + 0x116) = (short)uVar3;
            return 0;
          }
        }
        FUN_0036be34(param_1,uVar2);
        *(undefined2 *)(param_2 + 0x116) = uVar1;
        return 0;
      }
      if (param_3 - DAT_00111c3c == 3) {
        if (*(short *)(param_1 + 0x2a86) == 0x1035) {
          iVar8 = FUN_00369f3c(param_1);
          if (iVar8 == 0) {
            FUN_0036be34(param_1,uVar12);
            *(short *)(param_2 + 0x116) = (short)uVar12;
            *(ushort *)(iVar10 + 0xf14) = *(ushort *)(iVar10 + 0xf14) | 0x400;
          }
          iVar8 = FUN_00369f3c(param_1);
          if (iVar8 == 1) {
            FUN_0036be34(param_1,uVar13);
            *(short *)(param_2 + 0x116) = (short)uVar13;
            *(ushort *)(iVar10 + 0xf14) = *(ushort *)(iVar10 + 0xf14) | 0x800;
          }
        }
        if (*(short *)(param_1 + 0x2a86) != 0x1038) {
          return 0;
        }
        iVar8 = FUN_00369f3c(param_1);
        if (iVar8 == 0) {
          FUN_0036be34(param_1,iVar9);
          *(short *)(param_2 + 0x116) = (short)iVar9;
          *(ushort *)(iVar10 + 0xf14) = *(ushort *)(iVar10 + 0xf14) | 0x4000;
        }
        iVar9 = FUN_00369f3c(param_1);
        uVar2 = DAT_00111c70;
        if (iVar9 == 1) {
          FUN_0036be34(param_1,DAT_00111c70);
          *(short *)(param_2 + 0x116) = (short)uVar2;
          *(ushort *)(iVar10 + 0xf14) = *(ushort *)(iVar10 + 0xf14) | 0x8000;
        }
        iVar9 = FUN_00369f3c(param_1);
        uVar2 = DAT_00111c74;
        if (iVar9 != 2) {
          return 0;
        }
        FUN_0036be34(param_1,DAT_00111c74);
        *(short *)(param_2 + 0x116) = (short)uVar2;
        *(ushort *)(iVar10 + 0xf16) = *(ushort *)(iVar10 + 0xf16) | 1;
        return 0;
      }
      if (param_3 - DAT_00111c3c != 0x24) {
        return 1;
      }
      iVar9 = FUN_00369f3c(param_1);
      uVar2 = DAT_00111c48;
      if (iVar9 == 0) {
        FUN_0036be34(param_1,DAT_00111c48);
        *(short *)(param_2 + 0x116) = (short)uVar2;
      }
      iVar9 = FUN_00369f3c(param_1);
      uVar2 = DAT_00111c4c;
      if (iVar9 != 1) {
        return 0;
      }
      FUN_0036be34(param_1,DAT_00111c4c);
      *(short *)(param_2 + 0x116) = (short)uVar2;
      return 0;
    }
    if (iVar9 == 1) goto LAB_001119f4;
    if (iVar9 == 4) {
      iVar9 = FUN_00369f3c(param_1);
      uVar2 = DAT_00111c84;
      if (iVar9 == 0) {
        FUN_0036be34(param_1,DAT_00111c84);
        *(short *)(param_2 + 0x116) = (short)uVar2;
        return 0;
      }
      return 1;
    }
    if (iVar9 == 5) {
      return 1;
    }
    if (iVar9 != 6) {
      return 1;
    }
  }
  iVar9 = FUN_00369f3c(param_1);
  uVar2 = DAT_00111c50;
  if (iVar9 == 0) {
    FUN_0036be34(param_1,DAT_00111c50);
    *(short *)(param_2 + 0x116) = (short)uVar2;
  }
  iVar9 = FUN_00369f3c(param_1);
joined_r0x00111aac:
  if (iVar9 == 1) {
    FUN_0036be34(param_1,iVar11);
    *(short *)(param_2 + 0x116) = (short)iVar11;
  }
  return 0;
}
