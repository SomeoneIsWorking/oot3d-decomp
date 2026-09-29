// OoT3D decomp @ 0027fe5c  name=FUN_0027fe5c  size=768

void FUN_0027fe5c(int param_1,int param_2)

{
  short sVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  sVar5 = *(short *)(param_1 + 0x92);
  sVar1 = *(short *)(param_1 + 0xbe);
  iVar6 = FUN_003731e0(param_1 + 0x1a4);
  uVar4 = DAT_00280184;
  uVar3 = DAT_00280160;
  if (iVar6 == 0) {
    if (1 < *(short *)(param_1 + 0x980)) {
      *(short *)(param_1 + 0x980) = *(short *)(param_1 + 0x980) + -1;
      uVar4 = DAT_00280188;
      sVar5 = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x984);
      *(short *)(param_1 + 0x36) = sVar5;
      *(short *)(param_1 + 0xbe) = sVar5;
      local_28 = *(undefined4 *)(param_1 + 0xca4);
      local_24 = *(undefined4 *)(param_1 + 0xca8);
      local_20 = *(undefined4 *)(param_1 + 0xcac);
      FUN_0036f00c(uVar4,uVar3,param_2,param_1,&local_28,2,100,0xf,0);
      local_28 = *(undefined4 *)(param_1 + 0xcf4);
      local_24 = *(undefined4 *)(param_1 + 0xcf8);
      local_20 = *(undefined4 *)(param_1 + 0xcfc);
      FUN_0036f00c(uVar4,uVar3,param_2,param_1,&local_28,2,100,0xf,0);
      if (((*(byte *)(param_1 + 0xc0c) & 2) != 0) &&
         (*(int *)(param_1 + 0xc00) == *(int *)(DAT_0028018c + param_2))) {
        FUN_00375bcc(*(int *)(DAT_0028018c + param_2),DAT_00280190);
      }
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0xbfc);
      return;
    }
    return;
  }
  if ((*(short *)(param_1 + 0x980) == 0) && (DAT_00280164 < (int)(short)(sVar5 - sVar1) + 0x3fffU))
  {
    sVar5 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
    iVar6 = (int)sVar5;
    iVar7 = iVar6;
    if (iVar6 < 0) {
      iVar7 = -iVar6;
    }
    lVar2 = (longlong)(DAT_00280174 - iVar7) * (longlong)DAT_00280178 +
            ((ulonglong)(uint)(DAT_00280174 - iVar7) << 0x20);
    if ((short)((short)(int)(lVar2 >> 0x23) - (short)(lVar2 >> 0x3f)) < 1) {
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      lVar2 = (longlong)(DAT_00280174 - iVar6) * (longlong)DAT_00280178 +
              ((ulonglong)(uint)(DAT_00280174 - iVar6) << 0x20);
      uVar8 = (undefined4)lVar2;
      fVar10 = (float)VectorSignedToFloat((int)(short)((short)(int)(lVar2 >> 0x23) -
                                                      (short)(lVar2 >> 0x3f)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * DAT_0028017c * DAT_00280180 - DAT_00280180;
    }
    else {
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      lVar2 = (longlong)(DAT_00280174 - iVar6) * (longlong)DAT_00280178 +
              ((ulonglong)(uint)(DAT_00280174 - iVar6) << 0x20);
      uVar8 = (undefined4)lVar2;
      fVar10 = (float)VectorSignedToFloat((int)(short)((short)(int)(lVar2 >> 0x23) -
                                                      (short)(lVar2 >> 0x3f)),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = DAT_00280180 + fVar10 * DAT_0028017c * DAT_00280180;
    }
    *(short *)(param_1 + 0x984) = (short)(int)fVar10;
    if (sVar5 < 0) {
      uVar9 = 8;
    }
    else {
      *(short *)(param_1 + 0x984) = -(short)(int)fVar10;
      uVar9 = 9;
    }
    FUN_00375bcc(param_1,uVar4,uVar8);
    FUN_0037422c(uVar3,param_1 + 0x1a4,uVar9);
    *(undefined2 *)(param_1 + 0x980) = 0x1b;
    *(undefined1 *)(param_1 + 0xcd1) = 0x11;
    *(undefined1 *)(param_1 + 0xc81) = 0x11;
    *(undefined1 *)(param_1 + 0xc0c) = 0x11;
    *(undefined4 *)(param_1 + 0xcbc) = 0xffcfffff;
    *(undefined4 *)(param_1 + 0xc6c) = 0xffcfffff;
    *(undefined1 *)(param_1 + 0xcc1) = 8;
    *(undefined1 *)(param_1 + 0xc71) = 8;
    return;
  }
  *(undefined1 *)(param_1 + 0xcd1) = 0;
  *(undefined1 *)(param_1 + 0xc81) = 0;
  *(undefined1 *)(param_1 + 0xc0c) = 0;
  *(undefined4 *)(param_1 + 0xcbc) = 0;
  *(undefined4 *)(param_1 + 0xc6c) = 0;
  *(undefined1 *)(param_1 + 0xcc1) = 0;
  uVar3 = DAT_00280168;
  *(undefined1 *)(param_1 + 0xc71) = 0;
  FUN_00374a58(uVar3,param_1 + 0x1a4,4);
  *(undefined4 *)(param_1 + 0x6c) = DAT_0028016c;
  *(undefined4 *)(param_1 + 0x978) = 3;
  *(undefined4 *)(param_1 + 0x97c) = DAT_00280170;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(5,10);
}
