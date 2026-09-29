// OoT3D decomp @ 0037d5ac  name=FUN_0037d5ac  size=320

void FUN_0037d5ac(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  iVar2 = (int)*(short *)(param_1 + DAT_0037d6ec);
  fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  sVar1 = *(short *)(*DAT_0037d6f4 + 0x14cc);
  iVar3 = (int)(short)(sVar1 + 0x4000);
  fVar5 = fVar5 * DAT_0037d6f0;
  iVar4 = (int)(short)(sVar1 + -0x8000);
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037d6f4 + 0x14d2),
                                      (byte)(in_fpscr >> 0x15) & 3);
  *(int *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + -0x40;
  fVar6 = (float)FUN_00338f60(iVar2);
  fVar6 = DAT_0037d6f8 - fVar6;
  local_38 = FUN_00338f60(iVar4);
  local_34 = DAT_0037d6fc;
  local_30 = FUN_002cfca0(iVar4);
  fVar7 = (float)FUN_00338f60(iVar3);
  fVar8 = (float)FUN_002cfca0(iVar2);
  fVar9 = (float)FUN_002cfca0(iVar3);
  FUN_00372224(auStack_68,param_1 + 0x148);
  FUN_003625f8(ABS(fVar5),auStack_98,&local_38);
  FUN_0036c174(auStack_68,auStack_68,auStack_98);
  FUN_003713fc(fVar7 * fVar10 * fVar6,fVar8 * fVar10,fVar9 * fVar10 * fVar6,auStack_68,1);
  *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x210),auStack_68);
  FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
  return;
}
