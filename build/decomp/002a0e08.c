// OoT3D decomp @ 002a0e08  name=FUN_002a0e08  size=340

void FUN_002a0e08(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  iVar3 = (int)*(short *)(DAT_002a0f5c + param_1);
  fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  sVar1 = *(short *)(*DAT_002a0f64 + 0x14e2);
  sVar2 = *(short *)(*DAT_002a0f64 + 0x14e0);
  fVar4 = fVar4 * DAT_002a0f60;
  *(int *)(*param_2 + 0xc) = *(int *)(*param_2 + 0xc) + -0x40;
  fVar9 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)FUN_00338f60(iVar3);
  fVar5 = DAT_002a0f68 - fVar5;
  local_38 = FUN_00338f60((int)(short)(sVar2 + 0x4000));
  local_34 = DAT_002a0f6c;
  local_30 = FUN_002cfca0((int)(short)(sVar2 + 0x4000));
  fVar6 = (float)FUN_00338f60((int)sVar2);
  fVar7 = (float)FUN_002cfca0(iVar3);
  fVar8 = (float)FUN_002cfca0((int)sVar2);
  FUN_00372224(auStack_68,param_1 + 0x148);
  FUN_003625f8(ABS(fVar4),auStack_98,&local_38);
  FUN_0036c174(auStack_68,auStack_68,auStack_98);
  FUN_003713fc(fVar6 * fVar9 * fVar5,fVar7 * fVar9,fVar8 * fVar9 * fVar5,auStack_68,1);
  *(undefined1 *)(*(int *)(param_1 + 0x200) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x200),auStack_68);
  FUN_00372170(*(undefined4 *)(param_1 + 0x200),0);
  *(undefined1 *)(*(int *)(param_1 + 0x204) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x204),auStack_68);
  FUN_00372170(*(undefined4 *)(param_1 + 0x204),0);
  return;
}
