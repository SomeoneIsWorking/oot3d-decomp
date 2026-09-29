// OoT3D decomp @ 0027800c  name=FUN_0027800c  size=332

void FUN_0027800c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  FUN_003532e8(param_1,0);
  FUN_0037322c(DAT_00278158,param_1);
  FUN_003510b0(param_1,DAT_0027815c);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,
               *(undefined4 *)(DAT_00278160 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4),0);
  uVar1 = FUN_00353fd4(param_1,param_2,
                       *(undefined4 *)(DAT_00278164 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4));
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(short *)(param_1 + 0x36) =
       *(short *)(param_1 + 0xbe) +
       *(short *)(DAT_00278168 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 2);
  iVar2 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
  uVar1 = DAT_0027816c;
  if (iVar2 != 0) {
    fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    iVar2 = DAT_00278170;
    fVar5 = *(float *)(DAT_00278170 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4);
    fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    uVar1 = DAT_00278174;
    fVar6 = *(float *)(iVar2 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4);
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar3 * fVar5;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar4 * fVar6;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  return;
}
