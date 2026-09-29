// OoT3D decomp @ 0031c07c  name=FUN_0031c07c  size=396

void FUN_0031c07c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  short *psVar7;
  ushort *puVar8;
  uint in_fpscr;
  uint uVar9;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_0031c20c,DAT_0031c208,DAT_0031c208,param_2,param_1,4);
  FUN_00330370(param_1);
  psVar7 = (short *)0x0;
  iVar3 = FUN_0037571c(param_2);
  uVar2 = DAT_0031c210;
  if (iVar3 != 0) {
    psVar7 = *(short **)(param_2 + 0x22ec);
  }
  if ((psVar7 == (short *)0x0) || (*psVar7 != 5)) {
    puVar8 = (ushort *)0x0;
    uVar5 = FUN_0037571c(param_2);
    if (uVar5 != 0) {
      puVar8 = *(ushort **)(param_2 + 0x22ec);
    }
    if (puVar8 != (ushort *)0x0) {
      uVar5 = (uint)*puVar8;
    }
    if (puVar8 != (ushort *)0x0 && uVar5 != 8) {
      uVar4 = 6;
      psVar7 = (short *)0x0;
      iVar3 = FUN_0037571c(param_2);
      if (iVar3 != 0) {
        psVar7 = *(short **)(param_2 + 0x22ec);
      }
      if (psVar7 != (short *)0x0) {
        sVar1 = *psVar7;
        if (sVar1 == 0xb) {
          uVar4 = 8;
        }
        else if (sVar1 == 0xc) {
          uVar4 = 9;
        }
        else if (sVar1 == 0xd) {
          uVar4 = 7;
        }
        else if (sVar1 == 0x17) {
          uVar4 = 10;
        }
      }
      uVar6 = FUN_0036ae14(param_1 + 0x1a4,uVar4);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_0031c21c,uVar2,uVar6,DAT_0031c218,param_1 + 0x1a4,uVar4,0);
      *(undefined4 *)(param_1 + 3000) = 9;
      *(undefined4 *)(param_1 + 0xbbc) = 3;
      return;
    }
  }
  else {
    uVar5 = in_fpscr & 0xfffffff |
            (uint)(*(float *)(param_1 + 0x1e0) < *(float *)(param_1 + 0x1ec)) << 0x1f;
    uVar9 = uVar5 | (uint)(NAN(*(float *)(param_1 + 0x1e0)) || NAN(*(float *)(param_1 + 0x1ec))) <<
                    0x1c;
    if ((byte)(uVar5 >> 0x1f) == ((byte)(uVar9 >> 0x1c) & 1)) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,5);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar9 >> 0x15) & 3);
      FUN_00375c08(DAT_0031c214,uVar4,uVar2,uVar2,param_1 + 0x1a4,5,2);
      *(undefined4 *)(param_1 + 3000) = 0xb;
    }
  }
  return;
}
