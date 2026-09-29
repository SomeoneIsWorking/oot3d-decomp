// OoT3D decomp @ 001de890  name=FUN_001de890  size=1184

void FUN_001de890(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  undefined1 auStack_594 [4];
  undefined2 local_590;
  undefined2 local_58e;
  undefined2 local_58c;
  undefined1 auStack_584 [1280];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  iVar5 = FUN_0036bc98();
  piVar2 = DAT_001dec54;
  *DAT_001dec54 = iVar5;
  *(short *)(param_1 + 0xa0a) = *(short *)(param_1 + 0xa0a) + 1;
  if (*(short *)(param_1 + 0xa0e) != 0) {
    *(short *)(param_1 + 0xa0e) = *(short *)(param_1 + 0xa0e) + -1;
  }
  if (*(short *)(param_1 + 0xa10) != 0) {
    *(short *)(param_1 + 0xa10) = *(short *)(param_1 + 0xa10) + -1;
  }
  if ((*(short *)(param_1 + 0xa12) == 0) ||
     (sVar1 = *(short *)(param_1 + 0xa12) + -1, *(short *)(param_1 + 0xa12) = sVar1, sVar1 == 0)) {
    *(undefined1 *)(param_1 + 0xa19) = 3;
  }
  if ((*(char *)(param_1 + 0xa16) != '\0') && (*(int *)(param_1 + 0xa20) == 0)) {
    if (*(char *)(param_1 + 0xa15) == '\t') {
      local_34 = *(undefined4 *)(param_1 + 0x28);
      local_30 = *(undefined4 *)(param_1 + 0x2c);
      local_2c = *(undefined4 *)(param_1 + 0x30);
      FUN_0036df58(param_2,&local_34,0x13);
    }
    FUN_00374428(param_1);
    return;
  }
  FUN_0037322c(DAT_001dec58,param_1);
  FUN_0037572c(DAT_001dec5c,param_1);
  (**(code **)(param_1 + 0x9ac))(param_1,param_2);
  *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)(param_1 + 0xa08);
  if (((*(char *)(param_1 + 0xa17) != '\0') && (*piVar2 == 0)) &&
     ((*(byte *)(param_1 + 0x9c1) & 2) != 0)) {
    *(byte *)(param_1 + 0x9c1) = *(byte *)(param_1 + 0x9c1) & 0xfd;
    uVar3 = DAT_001dec60;
    if (*(char *)(param_1 + 0xb9) == '\0') {
      *(undefined1 *)(param_1 + 0xa16) = 1;
      uVar4 = DAT_001ded4c;
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      FUN_003686a8(param_1,0);
      FUN_003729b8(param_1,0);
    }
    else if (*(char *)(param_1 + 0xb9) == '\x0f') {
      local_40 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9d6),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_3c = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9d8),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_38 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9da),
                                            (byte)(in_fpscr >> 0x15) & 3);
      FUN_00350820(auStack_584,DAT_001dec64,0x28,0x20);
      local_590 = (undefined2)(int)local_40;
      local_58e = (undefined2)(int)local_3c;
      local_58c = (undefined2)(int)local_38;
      local_7c = 5;
      local_78 = 5;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_73 = 0;
      local_6f = 0;
      local_6b = 0;
      local_68 = 0;
      local_72 = 0x80;
      local_6e = 0x80;
      local_6a = 0x80;
      local_67 = 0;
      local_66 = 0x80;
      local_71 = 0xff;
      local_64 = 0;
      local_60 = 0;
      local_63 = 0;
      local_5f = 0;
      local_62 = 0x20;
      local_5e = 0x20;
      local_6d = 0xff;
      local_69 = 0xff;
      local_5c = 0;
      local_58 = 0;
      local_5b = 0;
      local_57 = 0;
      local_65 = 0xff;
      local_5a = 0x40;
      local_56 = 0x40;
      local_61 = 0;
      local_5d = 0;
      local_59 = 0;
      local_55 = 0;
      local_54 = 0;
      local_50 = 8;
      local_84 = uVar3;
      local_80 = DAT_001dec68;
      FUN_00350660(param_2,auStack_594,0,0,1,&local_590);
      FUN_0033cefc(param_2,0,0,&local_40);
      if ((*(char *)(param_1 + 0xa15) == '\x02' || *(char *)(param_1 + 0xa15) == '\x06') &&
         (0xc000 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0x36)) + 0x6000U))
      {
        FUN_00375ed8(param_1,0x400000,0xff,0,8);
      }
      else {
        FUN_00375eb8(param_1);
        FUN_00375bcc(param_1,DAT_001dec6c);
        FUN_00375ed8(param_1,0x400000,0xff,0,8);
        if (*(char *)(param_1 + 0xb7) != '\0') {
          if (*(char *)(param_1 + 0xa19) != '\0') {
            *(char *)(param_1 + 0xa19) = *(char *)(param_1 + 0xa19) + -1;
          }
          if (*(short *)(param_1 + 0xa12) == 0) {
            *(undefined2 *)(param_1 + 0xa12) = 0x3c;
          }
          FUN_003686a8(param_1,4);
          FUN_003729b8(param_1,4);
          goto LAB_001dec9c;
        }
      }
      FUN_003686a8(param_1,3);
      FUN_003729b8(param_1,3);
    }
  }
LAB_001dec9c:
  FUN_0037632c(param_1,param_1 + 0x9b0);
  iVar5 = param_2 + 0x5c78;
  if (((*(char *)(param_1 + 0xa17) != '\0') && (*piVar2 == 0)) &&
     (FUN_003761f0(param_2,iVar5,param_1 + 0x9b0), *(short *)(param_1 + 0x11a) == 0)) {
    FUN_00376168(param_2,iVar5,param_1 + 0x9b0);
  }
  FUN_003762a4(param_2,iVar5,param_1 + 0x9b0);
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001ded50,DAT_001ded50,DAT_001ded50,param_2,param_1,7);
  *(char *)(param_1 + 0xd0) = (char)*(undefined4 *)(param_1 + 0xa20);
  return;
}
