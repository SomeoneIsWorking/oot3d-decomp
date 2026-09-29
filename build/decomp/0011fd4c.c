// OoT3D decomp @ 0011fd4c  name=FUN_0011fd4c  size=440

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011fd4c(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  fVar2 = DAT_0011ff04;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    *(float *)(param_1 + 0x6c) = DAT_0011ff04;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= *(float *)(param_1 + 0x6c)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_0011ff08;
    }
    *(undefined2 *)(param_1 + 0xc14) = 0;
  }
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_0011ff0c);
  iVar3 = FUN_00365444(param_2,param_1);
  if ((iVar3 == 0) && (iVar3 = FUN_003650d0(param_2,param_1,0), iVar3 == 0)) {
    iVar3 = FUN_003731e0(param_1 + 0x1e0);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x90);
    }
    if (iVar3 != 0 && (uVar1 & 1) != 0) {
      if ((((uVar1 & 8) != 0) &&
          ((int)(short)(*(short *)(param_1 + 0x82) - *(short *)(param_1 + 0xbe)) + 11999U <=
           DAT_0011ff10)) && (*(int *)(param_1 + 0x98) < DAT_0011ff14)) {
        uVar4 = FUN_0036ae14(param_1 + 0x1e0,2);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_003650b8,uVar4,DAT_003650b4,DAT_003650b0,param_1 + 0x1e0,2);
        uVar4 = DAT_003650bc;
        *(undefined4 *)(param_1 + 0xbfc) = 0;
        iVar3 = DAT_003650c4;
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
        *(undefined4 *)(param_1 + 100) = DAT_003650c0;
        *(undefined2 *)(iVar3 + param_1) = 0;
        *(undefined4 *)(param_1 + 0xbe8) = 3;
        FUN_00375bcc(param_1,DAT_003650c8);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
        *(undefined4 *)(param_1 + 0xbf0) = DAT_003650cc;
        return;
      }
      iVar3 = FUN_00365444(param_2,param_1);
      if (iVar3 == 0) {
        if (((DAT_0011ff18 < *(int *)(param_1 + 0x98)) ||
            (iVar3 = FUN_00369608(param_2,param_1), iVar3 != 0)) ||
           ((*(uint *)(DAT_0011ff1c + param_2) & 7) == 0)) {
          FUN_00364fbc(param_1);
          return;
        }
        FUN_00373d40(param_1 + 0x1e0,0);
        uVar4 = DAT_0011ff20;
        *(byte *)(param_1 + 0xc84) = *(byte *)(param_1 + 0xc84) & 0xfb;
        *(undefined4 *)(param_1 + 0xbe8) = 7;
        *(float *)(param_1 + 0x6c) = fVar2;
        *(undefined2 *)(param_1 + 0xc0e) = 0;
        FUN_003ff758(param_1 + 0x28,uVar4);
        *(undefined4 *)(param_1 + 0xbf0) = DAT_0011ff24;
      }
    }
  }
  return;
}
