// OoT3D decomp @ 001008b4  name=FUN_001008b4  size=1892

void FUN_001008b4(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_44;
  float local_40;
  undefined4 uStack_3c;
  int local_38;
  
  uVar5 = DAT_00100c38;
  uVar13 = DAT_00100c34;
  iVar10 = 0;
  iVar9 = *(int *)(DAT_00100c30 + param_2);
  *(undefined1 *)(param_1 + 0xe0e) = *(undefined1 *)(param_1 + 0xe0f);
  local_38 = param_2;
  if (*(char *)(param_1 + 0xe0c) == '\x03' || *(char *)(param_1 + 0xe0c) == '\x02')
  goto LAB_00100d6c;
  if ((*(byte *)(param_1 + 0xf1d) & 0x80) != 0) {
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,6);
    fVar11 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(fVar11 - DAT_00100c3c <= *(float *)(param_1 + 0x1e0)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(float *)(param_1 + 0x1e0) = fVar11 - DAT_00100c3c;
    }
    *(byte *)(param_1 + 0xf1d) = *(byte *)(param_1 + 0xf1d) & 0x7f;
    *(byte *)(param_1 + 0xe45) = *(byte *)(param_1 + 0xe45) & 0xfd;
    goto LAB_00100d6c;
  }
  if ((*(byte *)(param_1 + 0xe45) & 2) == 0) goto LAB_00100d6c;
  local_44 = *(undefined4 *)(param_1 + 0x28);
  uStack_3c = *(undefined4 *)(param_1 + 0x30);
  local_40 = *(float *)(param_1 + 0x2c) + DAT_00100c40;
  FUN_00375fd0(param_1,param_1 + 0xe4c,1);
  *(undefined1 *)(param_1 + 0xe11) = *(undefined1 *)(param_1 + 0xb9);
  *(byte *)(param_1 + 0xe45) = *(byte *)(param_1 + 0xe45) & 0xfd;
  cVar4 = *(char *)(param_1 + 0xe11);
  if (cVar4 == '\0') goto LAB_00100d6c;
  if ((cVar4 == '\r' || cVar4 == '\x06') || (*(char *)(param_1 + 0xe0f) == '\0' && cVar4 == '\x0e'))
  {
    FUN_00375f90(param_2,&local_44,8);
    goto LAB_00100d6c;
  }
  FUN_00375ed8(param_1,0x400000,0xff,0,0xc);
  bVar1 = *(byte *)(param_1 + 0xb7);
  FUN_00375eb8(param_1);
  if (*(short *)(param_1 + 0x1c) == 0) {
    if (*(byte *)(param_1 + 0xb7) < 0xb) {
      FUN_00375d3c(local_38,param_2 + 0x208c,param_1,9);
      FUN_00375c44(local_38,param_1 + 0x28,0x14,DAT_00100c44);
      if (*(short *)(param_1 + 0xe1a) != 0xff) {
        FUN_00375c10(local_38);
      }
      goto LAB_00100d6c;
    }
    if (bVar1 == 0x32) {
      FUN_00375d3c(local_38,param_2 + 0x208c,param_1,5);
    }
  }
  else if ((10 < bVar1) && (*(byte *)(param_1 + 0xb7) < 0xb)) {
    *(undefined1 *)(param_1 + 0xe0f) = 1;
    FUN_00375e18(param_1 + 0xe20,2,local_38);
  }
  uVar7 = DAT_00100c48;
  if (*(char *)(param_1 + 0xb7) == '\0') {
    uVar8 = FUN_0036ae14(param_1 + 0x1a4,7);
    *(undefined1 *)(param_1 + 0xe12) = 0;
    uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x6c) = uVar13;
    *(undefined1 *)(param_1 + 0xe0c) = 2;
    FUN_00375c08(uVar5,uVar13,uVar8,uVar7,param_1 + 0x1a4,7,2);
    *(undefined1 *)(param_1 + 0xe0d) = 0x24;
    FUN_00375bcc(param_1,DAT_00100c4c);
    FUN_00375bcc(param_1,DAT_00100c50);
    *(undefined4 *)(param_1 + 0xe1c) = DAT_00100c54;
    FUN_00375b70(local_38,param_1);
    goto LAB_00100d6c;
  }
  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,2000,0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    iVar12 = FUN_003759d0();
    if ((iVar12 < 0x3f000000) &&
       (0x8000 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4000U)) {
      uVar8 = FUN_0036ae14(param_1 + 0x1a4,3);
      *(undefined4 *)(param_1 + 0x6c) = uVar13;
      *(undefined1 *)(param_1 + 0xe0c) = 1;
      uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined1 *)(param_1 + 0xe13) = 3;
      FUN_00375c08(DAT_00100c5c,DAT_00100c58,uVar8,uVar7,param_1 + 0x1a4,3,3);
      *(undefined4 *)(param_1 + 0xe1c) = DAT_00100c60;
    }
    if (*(short *)(param_1 + 0x1c) != 0) goto LAB_00100bf8;
  }
  else {
LAB_00100bf8:
    if (*(char *)(param_1 + 0xe0f) != '\0') {
      if ((bVar1 < 0xb) || (10 < *(byte *)(param_1 + 0xb7))) {
        FUN_00375bcc(param_1,DAT_00101050);
        FUN_00375bcc(param_1,DAT_00100c50);
      }
      else {
        FUN_00375bcc(param_1,DAT_00100c64);
      }
      sVar6 = FUN_003758b0(*(float *)(*(int *)(param_1 + 0xe3c) + 0x30) - *(float *)(param_1 + 0x30)
                           ,*(float *)(*(int *)(param_1 + 0xe3c) + 0x28) -
                            *(float *)(param_1 + 0x28));
      *(undefined1 *)(param_1 + 0xe0c) = 0;
      if ((int)(short)(sVar6 - *(short *)(param_1 + 0xbe)) + 0x4000U < 0x8001) {
        uVar8 = FUN_0036ae14(param_1 + 0x1a4,8);
        uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar5,uVar13,uVar8,uVar7,param_1 + 0x1a4,8,2);
        *(undefined4 *)(param_1 + 0x6c) = DAT_00101054;
      }
      else {
        uVar8 = FUN_0036ae14(param_1 + 0x1a4,5);
        uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar5,uVar13,uVar8,uVar7,param_1 + 0x1a4,5,2);
        *(undefined4 *)(param_1 + 0x6c) = DAT_00101058;
      }
      uVar7 = DAT_0010105c;
      *(undefined1 *)(param_1 + 0xe12) = 0;
      *(undefined4 *)(param_1 + 0xe1c) = uVar7;
      goto LAB_00100d6c;
    }
  }
  FUN_00375bcc(param_1,DAT_00101060);
  FUN_00375bcc(param_1,DAT_00101050);
  FUN_003757a8(param_2,&local_44,8);
LAB_00100d6c:
  if ((*(short *)(param_1 + 0x1c) == 0) && (*(byte *)(param_1 + 0xb7) < 0xb)) {
    iVar9 = FUN_0037577c(param_2);
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x13c) = DAT_00101064;
      *(undefined4 *)(param_1 + 0x140) = DAT_00101068;
      uVar7 = FUN_00375750(param_2 + 0x118,1);
      FUN_0037573c(param_2,uVar7);
      uVar7 = DAT_00101070;
      *(undefined1 *)(DAT_0010106c + 0x5a2) = 1;
      FUN_0037572c(uVar7,param_1);
      *(ushort *)(DAT_00101074 + 0xf2) = *(ushort *)(DAT_00101074 + 0xf2) | 0x1000;
      uVar7 = FUN_0036ae14(param_1 + 0x1a4,0x10);
      uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar5,uVar13,uVar7,uVar13,param_1 + 0x1a4,0x10,2);
      *(undefined4 *)(param_1 + 0xfe8) = 3;
      *(undefined4 *)(param_1 + 0xfec) = 2;
      iVar9 = FUN_0037571c(param_2);
      if (iVar9 != 0) {
        iVar10 = *(int *)(param_2 + 0x22ec);
      }
      if (iVar10 != 0) {
        uVar13 = VectorSignedToFloat(*(undefined4 *)(iVar10 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x28) = uVar13;
        uVar13 = VectorSignedToFloat(*(undefined4 *)(iVar10 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x2c) = uVar13;
        uVar13 = VectorSignedToFloat(*(undefined4 *)(iVar10 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0x30) = uVar13;
        uVar3 = *(undefined2 *)(iVar10 + 8);
        *(undefined2 *)(param_1 + 0xbe) = uVar3;
        *(undefined2 *)(param_1 + 0x36) = uVar3;
      }
      local_44 = DAT_00101078;
      FUN_0037547c(DAT_00100c4c,param_1 + 0x28,4,DAT_0010107c,DAT_0010107c);
      *(undefined1 *)(param_1 + 0xd0) = 0xff;
    }
  }
  else {
    (**(code **)(param_1 + 0xe1c))(param_1,param_2);
    if (((*(byte *)(param_1 + 0xe9c) & 2) != 0) &&
       (*(byte *)(param_1 + 0xe9c) = *(byte *)(param_1 + 0xe9c) & 0xfd,
       *(int *)(param_1 + 0xe90) == iVar9)) {
      uVar2 = *(undefined1 *)(iVar9 + 0x2488);
      if (((*(char *)(iVar9 + 0x2488) < '\x01') && (iVar10 = FUN_00374be8(param_2,0xe), iVar10 != 0)
          ) && (cVar4 = *(char *)(iVar9 + 0x2488), *(undefined1 *)(iVar9 + 0x2488) = 0,
               -0x28 < cVar4)) {
        (**(code **)(DAT_00101080 + param_2))(param_2,0xffffffc0);
        *(undefined1 *)(param_1 + 0xe12) = 0;
      }
      FUN_00374bb8(DAT_00101084,DAT_00101084,param_2,param_1,(int)*(short *)(param_1 + 0x92));
      *(undefined1 *)(iVar9 + 0x2488) = uVar2;
    }
    FUN_00376864(param_1);
    FUN_00376340(DAT_00101090,DAT_0010108c,DAT_00101088,param_2,param_1,0x1d);
    fVar11 = DAT_00101094;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar11;
    FUN_0037632c(param_1);
    iVar9 = param_2 + 0x5c78;
    FUN_003762a4(param_2,iVar9,param_1 + 0xe34);
    if (((*(char *)(param_1 + 0xb7) != '\0') && (*(short *)(DAT_00101098 + param_1) == 0)) &&
       (1 < *(byte *)(param_1 + 0xe0c))) {
      FUN_00376168(param_2,iVar9,param_1 + 0xe34);
    }
    if ('\0' < *(char *)(param_1 + 0xe12)) {
      FUN_003761f0(param_2,iVar9,param_1 + 0xe8c);
    }
    if (*(char *)(param_1 + 0xe0c) == '\t') {
      FUN_00376168(param_2,iVar9,param_1 + 0xf0c);
      return;
    }
  }
  return;
}

