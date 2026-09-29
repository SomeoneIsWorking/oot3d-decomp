// OoT3D decomp @ 00392818  name=FUN_00392818  size=160

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00392818(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;

  fVar1 = DAT_003928b8;
  FUN_0036e168(DAT_003928b8,DAT_003928c0,DAT_003928bc,DAT_003928b8,param_1 + 0x6c);
  FUN_003731e0(param_1 + 0x1e0);
  iVar4 = DAT_003928c4;
  uVar8 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x214) == fVar1) << 0x1e;
  if (SUB41(uVar8 >> 0x1e,0)) {
    *(float *)(param_1 + 0x6c) = fVar1;
    *(undefined1 *)(iVar4 + param_1) = 0;
    iVar4 = FUN_00328e08(param_2,param_1);
    if (iVar4 == 0) {
      if (DAT_003928c8 <= *(int *)(param_1 + 0x98)) {
        iVar4 = FUN_00369608(param_2,param_1);
        if (iVar4 != 0) {
          FUN_0036e734(param_1 + 0x1e0,4);
          *(undefined1 *)(param_1 + 0x1c4c) = 0xf;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        FUN_00370350(DAT_0035eeb4,param_1 + 0x1e0,4);
        FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
        uVar3 = DAT_0035eebc;
        if ((*(uint *)(DAT_0035eeb8 + param_2) & 1) != 0) {
          uVar3 = DAT_0035eec0;
        }
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x3fff;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (*(int *)(param_1 + 0x98) < DAT_003928c8) {
        sVar2 = *(short *)(*(int *)(DAT_003b7b20 + param_2) + 0xbe) - *(short *)(param_1 + 0xbe);
        if (sVar2 < 0) {
          sVar2 = -sVar2;
        }
        iVar6 = (int)sVar2;
        iVar4 = FUN_0035f228(param_2,param_1);
        if ((iVar4 != 0) && (DAT_003b7b34 <= iVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        if (DAT_003b7b34 <= iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        if (iVar6 < 0x3e81) {
          if (32000 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 16000U
             ) {
            uVar5 = *(uint *)(param_2 + 0x5bf4);
            bVar7 = (uVar5 & 1) != 0;
            if (bVar7) {
              uVar5 = (uint)*(ushort *)(param_1 + 0x1c);
            }
            if (bVar7 && uVar5 != 3) {
              *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x92);
              FUN_0035f090(param_1);
              return;
            }
            if (DAT_003b7b3c <= (uint)(*(int *)(param_1 + 0x98) + DAT_003b7b28)) {
              uVar3 = FUN_0036ae14(param_1 + 0x1e0,6);
              uVar3 = VectorSignedToFloat(uVar3,(byte)(uVar8 >> 0x15) & 3);
              FUN_00375c08(DAT_0035efd8,DAT_0035efdc,uVar3,DAT_0035efd8,param_1 + 0x264,6,2);
              FUN_0036e734(param_1 + 0x1e0,2);
                    /* WARNING: Subroutine does not return */
              FUN_003759d0();
            }
            iVar4 = FUN_0036f18c(param_1,DAT_003b7b40);
            if ((iVar4 != 0) && (iVar4 = FUN_0035f228(param_2,param_1), iVar4 == 0)) {
              FUN_0035eff0(param_1);
              return;
            }
            return;
          }
          if (*(int *)(param_1 + 0x98) < DAT_003b7b2c) {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0(param_1,param_2);
      }
    }
  }
  return;
}
