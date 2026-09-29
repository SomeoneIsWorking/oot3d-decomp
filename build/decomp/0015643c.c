// OoT3D decomp @ 0015643c  name=FUN_0015643c  size=420

void FUN_0015643c(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  iVar4 = *(int *)(param_1 + 0x128);
  FUN_003731e0(param_1 + 0x1a4);
  cVar1 = *(char *)(iVar4 + 0x1a4);
  if (cVar1 == '\x01') {
    FUN_00374a58(param_1 + 0x1a4,10);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    uVar5 = *(undefined4 *)(param_1 + 0x128);
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4),
                 *(undefined4 *)(param_1 + 0x2b8),param_2 + 0x208c,param_1,param_2,0x6d,0x1e,0,0,
                 0x26);
    *(undefined4 *)(param_1 + 0x128) = uVar5;
  }
  else if (cVar1 == '\x03') {
    FUN_00374a58(param_1 + 0x1a4,0);
  }
  else if (cVar1 == '\x04') {
    FUN_00374a58(param_1 + 0x1a4,0xb);
  }
  else if (cVar1 == '\x05') {
    FUN_00370350(DAT_001565e0,param_1 + 0x1a4,9);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  uVar5 = *(undefined4 *)(iVar4 + 0x2c);
  uVar6 = *(undefined4 *)(iVar4 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
  uVar2 = *(undefined2 *)(iVar4 + 0x36);
  *(undefined2 *)(param_1 + 0x36) = uVar2;
  *(undefined2 *)(param_1 + 0xbe) = uVar2;
  if (*(char *)(param_1 + 0x271) != '\0') {
    FUN_00353b70(DAT_001565e4,param_1);
    *(undefined2 *)(param_1 + 0x264) = 0x96;
    uVar5 = DAT_001565f4;
    *(undefined4 *)(param_1 + 0x474) = DAT_001565e8;
    *(undefined4 *)(param_1 + 0x478) = DAT_001565ec;
    *(undefined4 *)(param_1 + 0x47c) = DAT_001565f0;
    FUN_00375bcc(param_1,uVar5);
    *(undefined1 *)(param_1 + 0x123) = 0x1a;
    return;
  }
  *(undefined1 *)(iVar4 + 0x1a4) = 0;
  fVar3 = DAT_001565f8;
  *(float *)(param_1 + 0x54) = *(float *)(iVar4 + 0x54) * DAT_001565f8;
  *(float *)(param_1 + 0x58) = *(float *)(iVar4 + 0x58) * fVar3;
  *(float *)(param_1 + 0x5c) = *(float *)(iVar4 + 0x5c) * fVar3;
  return;
}
