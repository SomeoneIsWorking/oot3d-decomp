// OoT3D decomp @ 001899ec  name=FUN_001899ec  size=1312

void FUN_001899ec(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  float *pfVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  uint in_fpscr;
  undefined4 uVar12;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  iVar8 = DAT_00189e94;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00189e90 + iVar6) != 0)
     ) {
    iVar6 = iVar6 + 0x3a5c;
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x388) = iVar6 + 0x10;
  uVar10 = *(undefined4 *)(DAT_00189e98 + *(int *)(iVar8 + 4) * 4);
  FUN_003510b0(param_1,DAT_00189e98 + -0xc);
  FUN_003532e8(param_1,0);
  uVar7 = FUN_003532c0(*(undefined4 *)(param_1 + 0x388),0);
  iVar9 = param_2 + 0xae8;
  uVar7 = FUN_00353ec8(param_2,iVar9,param_1,uVar7);
  *(undefined4 *)(param_1 + 0x1a4) = uVar7;
  FUN_0034f6bc(param_2,iVar9,uVar7);
  *(undefined1 *)(param_1 + 0x38e) = 0;
  uVar7 = DAT_00189e9c;
  *(byte *)(param_1 + 0x391) = (byte)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 0xc);
  *(char *)(param_1 + 0x390) = (char)*(undefined2 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x74) = DAT_00189ea0;
  *(undefined1 *)(param_1 + 0x392) = 0;
  *(undefined1 *)(param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x393) = 0;
  iVar6 = FUN_0036bcb4(param_2,*(ushort *)(param_1 + 0x1c) & 0x1f);
  pfVar3 = DAT_00189ea8;
  fVar2 = DAT_00189ea4;
  if (iVar6 == 0) {
    if ((*(char *)(param_1 + 0x391) == '\x03' || *(char *)(param_1 + 0x391) == '\b') &&
       (iVar8 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x390)), iVar8 == 0)) {
      FUN_0036b940(param_2,iVar9,*(undefined4 *)(param_1 + 0x1a4));
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if ((*(char *)(param_1 + 0x391) == '\x01' || *(char *)(param_1 + 0x391) == '\a') &&
       (iVar8 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3)), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x24c) = DAT_00189eb8;
      FUN_0036b940(param_2,iVar9,*(undefined4 *)(param_1 + 0x1a4));
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar2;
      *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 1;
      *(undefined1 *)(param_1 + 0x38f) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x391);
      if (cVar1 == '\t' || cVar1 == '\n') {
        *(undefined4 *)(param_1 + 0x24c) = DAT_00189ebc;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x2000000;
        FUN_0036b940(param_2,iVar9,*(undefined4 *)(param_1 + 0x1a4));
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar2;
        *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 1;
        *(undefined1 *)(param_1 + 0x38f) = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      }
      else if ((cVar1 == '\v') &&
              (iVar8 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x390)), iVar8 == 0)) {
        *(undefined4 *)(param_1 + 0x24c) = DAT_00189ec0;
        FUN_0036b940(param_2,iVar9,*(undefined4 *)(param_1 + 0x1a4));
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar2;
        *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 1;
        *(undefined1 *)(param_1 + 0x38f) = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      }
      else {
        cVar1 = *(char *)(param_1 + 0x391);
        if (cVar1 == '\f' || cVar1 == '\r') {
          *(undefined4 *)(param_1 + 0x24c) = DAT_00189ec4;
          FUN_0036b940(param_2,iVar9,*(undefined4 *)(param_1 + 0x1a4));
          *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar2;
          *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 1;
          *(undefined1 *)(param_1 + 0x38f) = 0;
          *(undefined4 *)(param_1 + 0x240) = 0x3c;
        }
        else {
          if (cVar1 == '\x04' || cVar1 == '\x06') {
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
          }
          *(undefined4 *)(param_1 + 0x24c) = DAT_00189ec8;
          *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 0x11;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
        }
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38f) = 0xff;
    uVar7 = VectorFloatToUnsigned((DAT_00189eac - *pfVar3) + fVar2,3);
    *(char *)(param_1 + 0x392) = (char)uVar7;
    *(undefined4 *)(param_1 + 0x24c) = DAT_00189eb0;
    *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 0x10;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    if (*(char *)(iVar8 + 0xe) == '\x01') {
      uVar5 = *(ushort *)(param_2 + 0x104);
      bVar11 = uVar5 == 1;
      if (bVar11) {
        uVar5 = (ushort)*(byte *)(param_1 + 3);
      }
      if (bVar11 && uVar5 == 0xe) {
        *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) | 1;
      }
    }
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x8000;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar7 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0x388),1);
  FUN_00358ea8(*(undefined4 *)(param_1 + 0x388),param_2,param_1 + 0x1bc,uVar7,
               *(undefined4 *)(param_1 + 0x178),uVar10,param_1 + 0x250,param_1 + 0x2ec,3);
  uVar4 = DAT_00189ecc;
  uVar7 = FUN_003603c0(param_1 + 0x1bc,uVar10);
  uVar12 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  iVar8 = FUN_0036bcb4(param_2,*(ushort *)(param_1 + 0x1c) & 0x1f);
  uVar7 = uVar4;
  if (iVar8 != 0) {
    uVar7 = uVar12;
  }
  FUN_00375c08(DAT_00189ed0,uVar7,uVar12,uVar4,param_1 + 0x1bc,uVar10,2);
  bVar11 = *(char *)(param_1 + 0x391) == '\x02';
  if (bVar11) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1e4),2);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1e4),0);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1e4),3);
    uVar7 = *(undefined4 *)(param_1 + 0x1e4);
  }
  else {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1e4),3);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1e4),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1e4),2);
    uVar7 = *(undefined4 *)(param_1 + 0x1e4);
  }
  FUN_0036932c(uVar7,bVar11);
  cVar1 = *(char *)(param_1 + 0x391);
  if ((((cVar1 != '\x05' && cVar1 != '\x06') && cVar1 != '\a') && cVar1 != '\b') && cVar1 != '\r') {
    FUN_0037572c(DAT_00189fa0,param_1);
    FUN_0037322c(DAT_00189fa4,param_1);
    return;
  }
  FUN_0037572c(DAT_00189f98,param_1);
  FUN_0037322c(DAT_00189f9c,param_1);
  return;
}
