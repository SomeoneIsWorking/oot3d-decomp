// OoT3D decomp @ 003c6ad4  name=FUN_003c6ad4  size=520

void FUN_003c6ad4(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;

  fVar7 = DAT_003c6ce0;
  *(undefined4 *)(param_1 + 0x70) = DAT_003c6cdc;
  fVar2 = DAT_003c6ce4;
  fVar7 = *(float *)(param_1 + 0x734) + fVar7;
  *(float *)(param_1 + 0x734) = fVar7;
  uVar3 = DAT_003c6ce8;
  *(float *)(param_1 + 0x730) = *(float *)(param_1 + 0x730) + fVar7 + fVar2;
  FUN_0036fc20(fVar2,uVar3,param_1 + 0x744);
  FUN_00373500(DAT_003c6cf0,fVar2,DAT_003c6cec,param_1 + 0x748);
  uVar5 = DAT_003c6d00;
  fVar7 = DAT_003c6cfc;
  uVar4 = DAT_003c6cf8;
  uVar3 = DAT_003c6cf4;
  sVar1 = *(short *)(param_1 + 0x716);
  iVar6 = param_1 + 0x728;
  if (sVar1 == 0) {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) goto LAB_003c6bcc;
    if (*(short *)(param_1 + 0x1c) < 6) {
      FUN_00375bcc(param_1,DAT_003c6d0c);
    }
    else {
      FUN_00375bcc(param_1,DAT_003c6d10);
    }
    if (*(short *)(param_1 + 0x1c) < 6) {
      *(undefined2 *)(param_1 + 0x716) = 1;
      *(undefined2 *)(param_1 + 0x724) = 5;
      goto LAB_003c6c80;
    }
LAB_003c6ba4:
    FUN_001741c8(param_1,param_2);
  }
  else if (sVar1 == 1) {
    if (*(short *)(param_1 + 0x724) == 0) {
      *(undefined2 *)(param_1 + 0x716) = 2;
      *(undefined2 *)(param_1 + 0x724) = 5;
      FUN_00373500(uVar5,uVar3,fVar2,iVar6);
      *(undefined4 *)(param_1 + 100) = DAT_003c6d14;
      *(undefined4 *)(param_1 + 0x6c) = DAT_003c6d18;
    }
    else {
LAB_003c6c80:
      FUN_00373500(uVar4,uVar3,fVar2,iVar6);
    }
  }
  else if (sVar1 == 2) {
    if (*(short *)(param_1 + 0x724) == 0) {
      *(undefined2 *)(param_1 + 0x716) = 3;
      *(undefined2 *)(param_1 + 0x724) = 0x78;
    }
    else {
      FUN_00373500(DAT_003c6d00,DAT_003c6cf4,fVar2,iVar6);
    }
  }
  else if ((sVar1 == 3) &&
          (FUN_00373500(fVar2,DAT_003c6cfc,DAT_003c6cfc,iVar6), *(short *)(param_1 + 0x724) == 0))
  goto LAB_003c6ba4;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    FUN_0036fc20(DAT_003c6d08,DAT_003c6d04,param_1 + 0x6c);
  }
LAB_003c6bcc:
  *(float *)(param_1 + 0x72c) = *(float *)(param_1 + 0x72c) + *(float *)(param_1 + 0x6c) * fVar7;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}
