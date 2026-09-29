// OoT3D decomp @ 0011d914  name=FUN_0011d914  size=308

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011d914(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_0011da48);
  if (*(int *)(param_1 + 0x98) < DAT_0011da4c) {
    FUN_00374a58(DAT_0011da50,param_1 + 0x204,*(undefined4 *)(DAT_0011da54 + 4));
    FUN_00375bcc(param_1,DAT_0011da58);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0011da5c;
  }
  else {
    iVar2 = FUN_003731e0(param_1 + 0x204);
    if (iVar2 != 0) {
      FUN_00370350(DAT_00258c4c,param_1 + 0x204,*(undefined4 *)(DAT_00258c50 + 0x14));
      if (*(int *)(param_1 + 0x1a4) == DAT_00258c54) {
        uVar3 = (undefined2)DAT_00258c58;
      }
      else {
        uVar3 = 2;
      }
      *(undefined2 *)(param_1 + 0x1a8) = uVar3;
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00258c5c;
      return;
    }
    iVar2 = FUN_003736fc(DAT_0011da64,DAT_0011da60,param_1 + 0x204);
    if (iVar2 != 0) {
      fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar1 = DAT_0011da68;
      fVar6 = *(float *)(param_1 + 0x28);
      fVar4 = fVar4 * DAT_0011da68;
      fVar7 = *(float *)(param_1 + 0x2c) + DAT_0011da6c;
      fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar2 = z_actor_003738d0(fVar6 + fVar4,fVar7,*(float *)(param_1 + 0x30) + fVar5 * fVar1,
                               param_2 + 0x208c,param_2,DAT_0011da70,(int)*(short *)(param_1 + 0xbc)
                              );
      if (iVar2 != 0) {
        FUN_00375bcc(param_1,DAT_0011da74);
        return;
      }
    }
  }
  return;
}
