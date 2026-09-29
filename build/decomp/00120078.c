// OoT3D decomp @ 00120078  name=FUN_00120078  size=492

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00120078(int param_1,int param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  undefined8 uVar8;

  fVar7 = DAT_0012033c;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    *(float *)(param_1 + 0x6c) = DAT_0012033c;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar7 <= *(float *)(param_1 + 0x6c)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_00120340;
    }
    *(undefined2 *)(param_1 + 0xce4) = 0;
  }
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_00120344);
  iVar3 = FUN_00364c18(param_2,param_1,0);
  if (iVar3 == 0) {
    uVar8 = FUN_00370734(param_1 + 0x1e0);
    uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
    bVar6 = (int)uVar8 != 0;
    if (bVar6) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x90);
    }
    if (bVar6 && (uVar5 & 1) != 0) {
      sVar2 = *(short *)(param_1 + 0x82) - *(short *)(param_1 + 0xbe);
      if (sVar2 < 0) {
        sVar2 = -sVar2;
      }
      if ((((uVar5 & 8) == 0) || (DAT_00120348 < (int)sVar2 + 11999U)) ||
         (DAT_0012034c <= *(int *)(param_1 + 0x98))) {
        iVar3 = FUN_00364b1c(param_2,param_1);
        if (iVar3 == 0) {
          fVar7 = DAT_0012036c;
          if (*(short *)(param_1 + 0x1c) == 0) {
            fVar7 = DAT_00120370;
          }
          if (((*(float *)(param_1 + 0x98) <= fVar7) &&
              (iVar3 = FUN_00369608(param_2,param_1), iVar3 == 0)) &&
             (lVar1 = (ulonglong)*(uint *)(DAT_00120374 + param_2) * (ulonglong)DAT_00120378,
             *(uint *)(DAT_00120374 + param_2) + (uint)((ulonglong)lVar1 >> 0x23) * -0xc != 0)) {
            FUN_0034c3e4(param_1 + 0x1e0,DAT_00364b08,(int)lVar1);
            uVar4 = DAT_00364b0c;
            *(byte *)(param_1 + 0xcf8) = *(byte *)(param_1 + 0xcf8) & 0xfb;
            *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
            FUN_0037043c(uVar4,param_1 + 0x1e0);
            iVar3 = DAT_00364b14;
            uVar4 = DAT_00364b10;
            *(undefined4 *)(param_1 + 0xcb8) = 8;
            *(undefined4 *)(param_1 + 0x6c) = uVar4;
            *(undefined2 *)(iVar3 + param_1) = 0;
            *(undefined4 *)(param_1 + 0xccc) = 0xb;
            *(undefined4 *)(param_1 + 0xcc0) = DAT_00364b18;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
      }
      else {
        uVar4 = FUN_0036ae14(param_1 + 0x1e0,3);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00353020(DAT_00120354,uVar4,fVar7,DAT_00120350,param_1 + 0x1e0,DAT_00120358,2);
        uVar4 = DAT_0012035c;
        *(undefined4 *)(param_1 + 0xccc) = 0;
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
        *(undefined4 *)(param_1 + 100) = DAT_00120360;
        *(undefined2 *)(param_1 + 0xce4) = 0;
        *(undefined4 *)(param_1 + 0xcb8) = 4;
        FUN_00375bcc(param_1,DAT_00120364);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
        *(undefined4 *)(param_1 + 0xcc0) = DAT_00120368;
      }
    }
  }
  return;
}
