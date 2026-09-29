// OoT3D decomp @ 00174964  name=FUN_00174964  size=428

void FUN_00174964(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  int iVar8;
  float fVar9;

  fVar9 = *(float *)(param_1 + 0x338);
  FUN_003731e0(param_1 + 0x2fc);
  sVar1 = *(short *)(DAT_00174b10 + param_1);
  fVar7 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x2e8) = (DAT_00174b14 - fVar9 / fVar7) * DAT_00174b18;
  fVar7 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (fVar7 <= fVar9) {
    FUN_0036f9d0(DAT_00174b1c,param_2,param_1 + 0x28,0,10,3,0xf,0xffffffff,10,0);
    FUN_00375bcc(param_1,DAT_00174b20);
    uVar2 = DAT_00174b24;
    sVar1 = *(short *)(param_1 + 0x204);
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00174b24;
      return;
    }
    if (sVar1 == 2) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00174b28;
    }
    else if (sVar1 == 3 || sVar1 == 4) {
      iVar6 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),
                               *(float *)(param_1 + 0x2c) + DAT_00174b2c,
                               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,DAT_00174b30
                               ,0,0,0,3,1);
      uVar3 = DAT_00174b34;
      if (iVar6 != 0) {
        sVar1 = *(short *)(param_1 + 0x204);
        *(short *)(iVar6 + 0x1a8) = sVar1 + -3;
        iVar8 = FUN_00371e50(uVar3);
        uVar4 = DAT_00174b40;
        uVar3 = DAT_00174b38;
        if (iVar8 < 0x3f800000) {
          *(short *)(iVar6 + 0x1a8) = sVar1 + -2;
        }
        *(undefined4 *)(iVar6 + 100) = uVar3;
        uVar5 = DAT_00174b48;
        uVar3 = DAT_00174b44;
        if (*(short *)(iVar6 + 0x1a8) == 2) {
          *(undefined4 *)(iVar6 + 100) = DAT_00174b3c;
        }
        FUN_0037547c(uVar5,0,4,uVar3,uVar3,uVar4);
      }
      *(undefined2 *)(param_1 + 0x204) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    }
  }
  return;
}
