// OoT3D decomp @ 0011d7b0  name=FUN_0011d7b0  size=308

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011d7b0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_0011d8e4);
  if (*(int *)(param_1 + 0x98) < DAT_0011d8e8) {
    FUN_00374a58(DAT_0011d8ec,param_1 + 0x5b0,*(undefined4 *)(DAT_0011d8f0 + 8));
    FUN_00375bcc(param_1,DAT_0011d8f4);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0011d8f8;
  }
  else {
    iVar2 = FUN_003731e0(param_1 + 0x5b0);
    if (iVar2 != 0) {
      FUN_00370350(DAT_00258bf4,param_1 + 0x5b0,*(undefined4 *)(DAT_00258bf8 + 0x18));
      if (*(int *)(param_1 + 0x1a4) == DAT_00258bfc) {
        uVar3 = (undefined2)DAT_00258c00;
      }
      else {
        uVar3 = 3;
      }
      *(undefined2 *)(param_1 + 0x1a8) = uVar3;
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00258c04;
      return;
    }
    iVar2 = FUN_003736fc(DAT_0011d900,DAT_0011d8fc,param_1 + 0x5b0);
    if (iVar2 != 0) {
      fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar1 = DAT_0011d904;
      fVar6 = *(float *)(param_1 + 0x28);
      fVar4 = fVar4 * DAT_0011d904;
      fVar7 = *(float *)(param_1 + 0x2c) + DAT_0011d908;
      fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar2 = z_actor_003738d0(fVar6 + fVar4,fVar7,*(float *)(param_1 + 0x30) + fVar5 * fVar1,
                               param_2 + 0x208c,param_2,DAT_0011d90c,(int)*(short *)(param_1 + 0xbc)
                              );
      if (iVar2 != 0) {
        FUN_00375bcc(param_1,DAT_0011d910);
        return;
      }
    }
  }
  return;
}
