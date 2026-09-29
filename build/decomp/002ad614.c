// OoT3D decomp @ 002ad614  name=FUN_002ad614  size=336

void FUN_002ad614(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;

  uVar1 = *(ushort *)(param_1 + 0x1c);
  FUN_003532e8(param_1,0);
  FUN_003510b0(param_1,DAT_002ad764);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,1,0);
  fVar2 = DAT_002ad774;
  uVar4 = DAT_002ad76c;
  if ((int)((uint)uVar1 << 0x17) < 0) {
    if ((*(ushort *)(DAT_002ad768 + 0x30) & 0x200) != 0) {
      fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      fVar2 = DAT_002ad77c;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar5 * DAT_002ad77c;
      fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fVar5 * fVar2;
      *(undefined4 *)(param_1 + 0x1bc) = uVar4;
      goto LAB_002ad720;
    }
LAB_002ad71c:
    *(undefined4 *)(param_1 + 0x1bc) = DAT_002ad770;
  }
  else {
    if (*(int *)(DAT_002ad768 + -0xefc) == 0) {
      if ((*(ushort *)(DAT_002ad768 + 0x30) & 0x200) == 0) goto LAB_002ad71c;
    }
    else {
      iVar3 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_002ad778;
        goto LAB_002ad720;
      }
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar2;
    *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  }
LAB_002ad720:
  uVar4 = FUN_00353fd4(param_1,param_2,1);
  uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  return;
}
