// OoT3D decomp @ 003de594  name=FUN_003de594  size=360

void FUN_003de594(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;

  FUN_00370734(param_1 + 0x1a4);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x60;
  fVar4 = (float)FUN_002cfca0();
  fVar2 = DAT_003de6dc;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar4 * DAT_003de6dc;
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar4 * fVar2;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36) + 0x4000;
  uVar1 = DAT_003de6e0;
  if ((*(byte *)(param_1 + 0x803) & 1) != 0) {
    *(byte *)(param_1 + 0x803) = *(byte *)(param_1 + 0x803) & 0xfe;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    FUN_00373d40(param_1 + 0x1a4,1);
    *(undefined4 *)(param_1 + 0x810) = 0xffcfffff;
    uVar1 = DAT_003de6e4;
    *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_1 + 0x30);
    uVar3 = DAT_003de6ec;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000;
    *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfe;
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    *(undefined4 *)(param_1 + 0xc4) = DAT_003de6e8;
    FUN_00375bcc(param_1,uVar3);
    FUN_0036e670(param_2,param_1 + 0x28,0,0,1,700);
    *(undefined4 *)(param_1 + 0x7dc) = DAT_003de6f0;
  }
  if ((*(short *)(param_1 + 0x1c) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x124) + 0x7dc) != DAT_003de6f4)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    uVar1 = DAT_00239070;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined4 *)(param_1 + 0x7dc) = uVar1;
    return;
  }
  return;
}
